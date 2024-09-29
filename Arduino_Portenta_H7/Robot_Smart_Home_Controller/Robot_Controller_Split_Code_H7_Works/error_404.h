/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-web-server-multiple-pages
  *
 *  Modifed by Dale Weber <hybotics@hybotics.dev>
 *
 *  Copyright (c) by Dale Weber <hybotics@hybotics.dev> 2024
*/

#ifndef ERROR_404_H
#define ERROR_404_H

const char *HTML_CONTENT_404 = R""""(
<!DOCTYPE html>
<HTML lang="en">
<HEAD>
  <META charset="UTF-8">
  <META name="viewport" content="width=device-width, initial-scale=1.0">
  <LINK rel="icon" href="data:,">
  <TITLE>404 - Page Not Found</title>
  <STYLE>
      H1 {color: #ff4040;}
  </STYLE>
</HEAD>
<BODY>
    <H3>Sequence #SEQUENCE_COUNT_MARKER</H3>
    <H1>***** 404 *****</H1>
    <p>Oops! The page you are looking for could not be found on this wWeb server.</p>
    <p>Please check the URL or go back to the <a href="/index">Home Page</A>.</P>
</BODY>
</HTML>
)"""";

#endif
