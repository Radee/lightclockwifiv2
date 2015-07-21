const char settings_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head><title>Settings</title></head>
<form action=/ method=GET>
Hour Marks: <select name=hourmarks>
<option value=0 $hourmarks0>none</option>
<option value=1 $hourmarks1>Midday</option>
<option value=2 $hourmarks2>Quadrants</option>
<option value=3 $hourmarks3>Hours</option>
</select><br>
<input id=showsecondshidden type=hidden name=showsecondshidden value=0>
Show Seconds<input type=checkbox name=showseconds $showseconds><br>
Sleep (24hr)<br><input type=text name=sleep value=$sleep><br>
Wake (24hr)<br><input type=text name=wake value=$wake><br>
<input type=submit name=submit value='Update Settings'/></form>
<a href=/timezone>Update Timezone</a><br>
<a href=/>Return without saving</a><br>
<a href=/cleareeprom>Reset to factory default</a>
<script>var x=document.getElementById("latitude");var y=document.getElementById("longitude");function getLocation(){if(navigator.geolocation){navigator.geolocation.getCurrentPosition(showPosition)}else{x.innerHTML="Geolocation is not supported by this browser."}}function showPosition(a){console.log("in showPosition");x.value=a.coords.latitude;y.value=a.coords.longitude};</script>
</body>
</html>
)=====";
