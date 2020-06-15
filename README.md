# ESP32CAM-FaceDetect-Line-Notify [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)<br>

### Line-Notification w/ landmark box when ESP32Cam detects faces! ###
<img src="pictures/LineNotify.png" width=320 /> <br>
Try some examples from ESP-face, ESPino32Cam!<br>
Hardware ESP32Cam from AI-Thinker/ArduCam-IOTai. <br>
_The detection performance are not bad with following results..._ 
<br><br>
 
 
<img src="pictures/faceZU.png" width=280 /> <img src="pictures/faceWWomen.png" width=280 /> <br>
<img src="pictures/faceDoggy.png" width=280/> <img src="pictures/faceDog.png" width=280/> <br>
<img src="pictures/faceTrump.png" width=280/> <img src="pictures/faceTrumpFK.png" width=280/> <img src="pictures/faceKingLine.png" width=320/>
 
<br><br>
MTMN is a lightweight **Human Face Detection Model**, which is built around [a new mobile architecture called MobileNetV2](https://arxiv.org/abs/1801.04381) and [Multi-task Cascaded Convolutional Networks](https://arxiv.org/abs/1604.02878), and is specially designed for embedded devices. <br>

Following diagram shows the workflow of MTNM.
![The workflow of MTMN](https://github.com/espressif/esp-face/blob/master/img/mtmn-workflow-2.png)
<br>
<br>
<img src="pictures/MTMNsimulation.gif" width=640/> <br>
![MTMN simulation](https://www.youtube.com/watch?v=3JQ3hYko51Y) An excellent brief intro on MTMN operations!
<br>
## References
  - [ESP32CAM](https://github.com/espressif/esp32-camera)  Arduino library for ESP32 camera.
  - [ESP-face](https://github.com/espressif/esp-face)  Espressif esp32cam face detection.
  - [ESPino32Cam examples](https://github.com/ThaiEasyElec/ESPino32/tree/master/examples/camera)  Another ESP32cam examples.
