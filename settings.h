const char settings_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head>
$css
$fonts
<title>Settings</title>
<meta http-equiv=Content-Type content="text/html; charset=utf-8" />
<meta name=viewport content="width=device-width, initial-scale=1.0">
<link rel=stylesheet href=style.css>
</head>
<body class=settings-page>
<form class=form-verticle action=/ method=GET>
<ul>
<li>
<label>Hour Marks:</label>
<div class=form-field>
<select name=hourmarks>
<option value=0 $hourmarks0>none</option>
<option value=1 $hourmarks1>Midday</option>
<option value=2 $hourmarks2>Quadrants</option>
<option value=3 $hourmarks3>Hours</option>
<option value=4 $hourmarks4>Darken to Midday</option>
</select>
</div>
</li>
<li class=checkbox>
<input id=showsecondshidden type=hidden name=showsecondshidden value=0>
<input id=showseconds type=checkbox name=showseconds $showseconds>
<label for=showseconds>Show Seconds</label>
</li>
<li id="rcorners2">
<p title="The light clock will display only dots for the hours and minutes to be less bright at night" class = "tooltip">Sleep:</p>
<label>From</label>
<div class=form-field>

<input type=time name=sleep value=$sleep>
</div>

<label>To</label>
<div class=form-field>
<input type=time name=wake value=$wake>
</div>
</li>
</p>
<li>
<label class=hide-mobile>&nbsp;</label>
<div class=form-field>
<input class="btn btn-default" type=submit name=submit value='Update Settings'/>
</div>
</li>
</ul>
</form>
<div class=btn-box>
<a class=btn href=/timezone>Update Timezone</a>
<a class=btn href=/>Return without saving</a>
<a class=btn href=/cleareeprom>Reset to factory default</a>
</div>
</body>
</html>
)=====";
