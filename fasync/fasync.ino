#define SYSTEM_SENSOR 1
#define SYNC_PIN      9

const int syncType = SYSTEM_SENSOR;
bool initSyncPulse;

void setup() {
  // put your setup code here, to run once:
  pinMode(SYNC_PIN, OUTPUT);
  initSyncPulse = true;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SYNC_PIN, LOW);
  // if (initSyncPulse) {
  //   if (syncType == SYSTEM_SENSOR) {
  //     digitalWrite(SYNC_PIN, HIGH);
  //     delay(1980);
  //     digitalWrite(SYNC_PIN, LOW);
  //     delay(20);
  //     digitalWrite(SYNC_PIN, HIGH);
  //     delay(20);
  //     digitalWrite(SYNC_PIN, LOW);
  //     delay(20);
  //   }
  //   initSyncPulse = false;
  // } else {
  //   if (syncType == SYSTEM_SENSOR) {
  //     digitalWrite(SYNC_PIN, HIGH);
  //     delay(980);
  //     digitalWrite(SYNC_PIN, LOW);
  //     delay(20);
  //   }
  // }
}
