#include "qr/ESP32CAM.h"
#include "qr/ESP32CAM_LineNotify.h"

const char* ssid = CONFIG_WIFI_SSID;
const char* password = CONFIG_WIFI_PASSWORD;
String token = "1Nu7gLw8g2bSDrYVFuFSUHVNavWwvGRLprd8fVX4mhE";
//ESP32CAM cam;
LineNotify line;
#define Button 0

void setupWiFiLineNotify() {
    /*
    Serial.begin(115200);
    Serial.println("\r\nESP32CAM LineNotify...");
    if (cam.init() != ESP_OK) {
        //cam.printDebug(F("Init Fail"));
        Serial.println(F("Init Fail"));
        while (1)
            ;
    }
    sensor_t* s = cam.sensor();
    s->set_framesize(s, FRAMESIZE_VGA);
    s->set_whitebal(s, true);
    */
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(1000);
        }
    Serial.println("\r\nConnected");
    line.authenKey(token);
    line.setUTC(8);
}
/*
long last;
void loop() {
    camera_fb_t* fb;
    String msg;
    if ((millis()-last) > 30000) {
        last = millis();
        lineResp ret;
        msg = "ESP32CAM RobotFace";
        Serial.println("Send Message,Sticker and Image: " + msg);
        Serial.println("Capture");
        fb = cam.capture();
        ret = line.send(msg, 4, 275, fb->buf, fb->len);
        cam.clearMemory(fb);
        if (ret.status) {
            Serial.printf("API Called %d/%d per hour\r\n", ret.remaining, ret.limit);
            Serial.printf("Send Image %d/%d per hour\r\n", ret.imageremaining, ret.imagelimit);
            Serial.printf("The time when the limit is reset %d(UTC epoch seconds) , ", ret.reset);
            Serial.println(ret.reset_time);
        } else
            Serial.println(ret.response);
        Serial.println();
    }
}
*/

void sendLineNotify(unsigned char *jpgout, int jpglen)
{
    String msg;
    if (jpglen) {
        lineResp ret;
        msg = "ESP32CAM RobotFace";
        Serial.println("Send Message,Sticker and Image: " + msg);
        Serial.println("Capture");
        //fb = cam.capture();
        ret = line.send(msg, 4, 275, jpgout, jpglen);
        //cam.clearMemory(fb);
        if (ret.status) {
            Serial.printf("API Called %d/%d per hour\r\n", ret.remaining, ret.limit);
            Serial.printf("Send Image %d/%d per hour\r\n", ret.imageremaining, ret.imagelimit);
            Serial.printf("The time when the limit is reset %d(UTC epoch seconds) , ", ret.reset);
            Serial.println(ret.reset_time);
        } else
            Serial.println(ret.response);
        Serial.println();
    }
}