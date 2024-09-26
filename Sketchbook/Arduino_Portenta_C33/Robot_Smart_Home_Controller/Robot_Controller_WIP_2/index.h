/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-web-server-multiple-pages
 */

const char *HTML_CONTENT_HOME = R""""(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="icon" href="data:,">
    <title>ROBOT_PAGE_NAME_MARKER</title>
</head>
<body>
    <H1><CENTER><SPAN style="color: blue">ROBOT_NAME_MARKER</SPAN></CENTER></H1>
    <H2><CENTER>DATESTAMP_MARKER</CENTER></H2><BR>
    <H3>Request #REQUEST_COUNT_MARKER (SKETCH_CODE_MARKER)</CENTER><BR>
    <ul>
        <li><a href="/environment"><span style="color: yellow">Environment Information</span></a></li>
        <li><a href="/switches"><span style="color: yellow">Switch Status</span></a></li>
        <li><a href="/potentiometer"><span style="color: yellow">Potentiometer Data</span></a></li>
        <li><a href="/light"><span style="color: yellow">Light level</span></a></li>
        <li><a href="/imu"><span style="color: yellow">IMU Data</span></a></li>
    </ul></H3>
</body>
</html>
)"""";
