#include <SchooMyUtilities.h>

SchooMyUtilities scmUtils = SchooMyUtilities();
// ===== ポート設定 =====
// 土壌水分センサー → 左上ポート（アナログ A5）
#define MOISTURE_PIN A5
// 音センサー → 右上ポート（アナログ A1）
#define SOUND_PIN A1
// 磁気センサー → 左下ポート（secondピン = 5）
#define MAGNETIC_PIN 5
// 警告LED → 右下ポート（secondピン = 10）
#define LED_PIN 10
// ===== しきい値設定 =====
#define MOISTURE_LOW    300   // 水分不足とみなす値（これ以下で警告）
#define SOUND_LOW        50   // 心肺音が弱いとみなす値（これ以下で警告）
#define IRON_THRESHOLD  200   // 鉄分不足とみなす磁気センサーの値（これ以下で警告）
void setup() {
 Serial.begin(9600);
 pinMode(MOISTURE_PIN, INPUT);
 pinMode(SOUND_PIN, INPUT);
 pinMode(MAGNETIC_PIN, INPUT);
 pinMode(LED_PIN, OUTPUT);
 digitalWrite(LED_PIN, HIGH); // LED消灯（アクティブロー）
 Serial.println("=== 仮想・健康補助システム 起動 ===");
}
void loop() {
 // センサー値の読み取り
 int moisture = analogRead(MOISTURE_PIN);   // 水分値（0〜1023）
 int sound    = analogRead(SOUND_PIN);      // 心肺音値（0〜1023）
 int magnetic = analogRead(MAGNETIC_PIN);   // 磁気値（デジタル代用）
 // シリアルモニターに表示
 Serial.print("水分: ");
 Serial.print(moisture);
 Serial.print(" / 心肺音: ");
 Serial.print(sound);
 Serial.print(" / 磁気(鉄分): ");
 Serial.println(magnetic);
 // 警告判定
 bool warning = false;
 if (moisture < MOISTURE_LOW) {
   Serial.println("⚠ 警告: 水分不足を検知！");
   warning = true;
 }
 if (sound < SOUND_LOW) {
   Serial.println("⚠ 警告: 心肺の動きが弱い可能性！");
   warning = true;
 }
 if (magnetic < IRON_THRESHOLD) {
   Serial.println("⚠ 警告: 鉄分不足の可能性！");
   warning = true;
 }
 // 警告があればLEDを点灯
 if (warning) {
   digitalWrite(LED_PIN, LOW);  // 点灯（アクティブロー）
 } else {
   digitalWrite(LED_PIN, HIGH); // 消灯
   Serial.println("✓ 全て正常");
 }
 delay(1000); // 1秒ごとに測定
}

