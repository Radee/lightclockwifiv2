const char css_file[] PROGMEM = R"=====(
<style>
*{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}html{background:#e0e0e0;background:-moz-linear-gradient(left,#e0e0e0 0,#ffffff 50%,#e0e0e0 100%);background:-webkit-gradient(linear,left top,right top,color-stop(0%,#e0e0e0),color-stop(50%,#ffffff),color-stop(100%,#e0e0e0));background:-webkit-linear-gradient(left,#e0e0e0 0,#ffffff 50%,#e0e0e0 100%);background:-o-linear-gradient(left,#e0e0e0 0,#ffffff 50%,#e0e0e0 100%);background:-ms-linear-gradient(left,#e0e0e0 0,#ffffff 50%,#e0e0e0 100%);background:linear-gradient(to right,#e0e0e0 0,#ffffff 50%,#e0e0e0 100%);filter:progid:DXImageTransform.Microsoft.gradient(startColorstr='#e0e0e0',endColorstr='#e0e0e0',GradientType=1)}body{text-align:center;margin:0;padding:40px;background:#fff;box-shadow:0 1px 10px rgba(0,0,0,0.1);border-radius:3px;font-family:'Abel',sans-serif}ul{margin:0;padding:0;list-style:none}a{text-decoration:none}label{font-weight:bold}input,select{background:#fff;text-transform:capitalize;margin:0;border:1px solid rgba(0,0,0,0.15);border-radius:3px;font-family:'Abel',sans-serif;font-size:15px;letter-spacing:1px;display:inline-block;padding:15px;-webkit-transition:all .6s ease 0s;-moz-transition:all .6s ease 0s;-ms-transition:all .6s ease 0s;-o-transition:all .6s ease 0s;transition:all .6s ease 0s}input:focus,select:focus{border-color:rgba(0,0,0,0.5);outline:0}select option{padding:0 10px}.settings-page{width:550px;margin:60px auto}.form-verticle ul li{width:100%;display:inline-block;margin-bottom:30px;margin-top:0;position:relative}.form-verticle ul li label{width:35%;display:inline-block;color:#222;text-transform:uppercase;letter-spacing:1.5px;line-height:48px;float:left}.form-verticle ul li .form-field{width:65%;display:inline-block;float:left}.form-verticle ul li .form-field select,.form-verticle ul li .form-field input{width:100%}.form-verticle ul li.checkbox input[type="checkbox"]{display:none}.form-verticle ul li.checkbox label{display:inline-block;cursor:pointer;font-weight:bold;padding-left:0;line-height:17px}.form-verticle ul li.checkbox label:before{color:#fff;content:"\f00c";font-family:FontAwesome;font-size:13px;text-align:center;line-height:20px;display:inline-block;width:23px;height:22px;margin-right:10px;position:absolute;left:35%;top:-2px;border:1px solid rgba(0,0,0,0.15);-webkit-transition:all .35s ease 0s;-moz-transition:all .35s ease 0s;-ms-transition:all .35s ease 0s;-o-transition:all .35s ease 0s;transition:all .35s ease 0s}.form-verticle ul li.checkbox input[type="checkbox"]:checked+label:before{color:#333;border-color:rgba(0,0,0,0.5)}.form-verticle ul li input.btn{width:auto}.btn{background:#f0f0f0;color:#111;text-align:center;width:auto;cursor:pointer;padding:15px 20px;text-transform:uppercase;border-radius:3px;font-family:'Abel',sans-serif;font-size:18px;letter-spacing:1px;font-weight:bold;display:inline-block;border:0;-webkit-transition:all .5s ease 0s;-moz-transition:all .5s ease 0s;-ms-transition:all .5s ease 0s;-o-transition:all .5s ease 0s;transition:all .5s ease 0s}.btn:hover{background:#111;color:#fff}.btn-default{background:#111;color:#fff}.btn-default:hover{background:#f0f0f0;color:#111}.btn-box{display:flex;justify-content:center}.btn-box .btn{font-size:14px;margin:0 5px;display:flex;align-items:center}@media screen and (max-width:550px){.settings-page{width:auto;margin:20px}}@media screen and (max-width:500px){.form-verticle ul li label{width:100%}.form-verticle ul li .form-field{width:100%}.hide-mobile{display:none!important}.btn-box{display:inline-block;width:100%}.btn-box .btn{margin:0 0 10px}.form-verticle ul li.checkbox label:before{left:auto;right:0}}@media screen and (max-width:480px){.settings-page{padding:10px 20px}}
#rcorners2 {
    border-radius: 25px;
    border: 2px solid #AAAAAA;
    padding: 20px; 

}
</style>
)=====";
