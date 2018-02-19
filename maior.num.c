<!DOCTYPE html>
<!-- saved from url=(0043)https://repl.it/repls/InsecureStrictStartup -->
<html class=" "><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><title class="next-head">repl.it - InsecureStrictStartup</title><link rel="shortcut icon" href="https://repl.it/public/images/favicon.ico" type="image/vnd.microsoft.icon" class="next-head"><link rel="alternate" type="application/json+oembed" href="https://repl.it/data/oembed?url=https%3A%2F%2Frepl.it%2Flanguages" title="repl.it - select language" class="next-head"><meta property="og:title" content="InsecureStrictStartup" class="next-head"><meta property="og:description" content="Powerful and simple online compiler, IDE, interpreter, and REPL. Code, compile, and run code in 30+ programming languages. including JavaScript, Python, Ruby, Java, Node.js, Go, Scheme, C, C#, C++, Lua and many more." class="next-head"><meta property="og:type" content="article" class="next-head"><meta property="og:image" content="https://repl.it/public/images/replit_logo_white.png" class="next-head"><meta property="og:site_name" content="repl.it" class="next-head"><meta property="fb:app_id" content="1775481339348651" class="next-head"><meta itemprop="name" content="repl.it" class="next-head"><meta itemprop="description" content="Powerful and simple online compiler, IDE, interpreter, and REPL. Code, compile, and run code in 30+ programming languages. including JavaScript, Python, Ruby, Java, Node.js, Go, Scheme, C, C#, C++, Lua and many more." class="next-head"><meta itemprop="image" content="https://repl.it/public/images/replit_logo_white.png" class="next-head"><meta name="description" content="Powerful and simple online compiler, IDE, interpreter, and REPL. Code, compile, and run code in 30+ programming languages. including JavaScript, Python, Ruby, Java, Node.js, Go, Scheme, C, C#, C++, Lua and many more." class="next-head"><meta name="keywords" content="Interpreters,Compilers,Teach,Learn,Code,REPL,Compiler,APL,ES6,Bloop,BrainF,C,Clojure,CoffeeScript,C++,C++11,C#,Emoticon,Enzyme,Forth,F#,Go,Haskell,Java,JavaScript,Jest,Kotlin (beta),LOLCODE,Lua,Nodejs,PHP,Python,Python3,Python (with Turtle),QBasic,React Native,Roy,Ruby,Rust,Scheme,Swift,Unlambda,HTML, CSS, JS" class="next-head"><meta name="author" property="og:author" content="repl.it" class="next-head"><meta name="twitter:card" content="summary" class="next-head"><meta name="twitter:site" content="@replit" class="next-head"><meta name="twitter:title" content="InsecureStrictStartup" class="next-head"><meta name="twitter:description" content="Powerful and simple online compiler, IDE, interpreter, and REPL. Code, compile, and run code in 30+ programming languages. including JavaScript, Python, Ruby, Java, Node.js, Go, Scheme, C, C#, C++, Lua and many more." class="next-head"><meta name="twitter:image" content="https://repl.it/public/images/replit_logo_white.png" class="next-head"><link rel="stylesheet" href="./maior.num_files/vs.min.css" class="next-head"><link rel="stylesheet" type="text/css" href="./maior.num_files/slick.min.css" class="next-head"><link rel="stylesheet" type="text/css" href="./maior.num_files/slick-theme.min.css" class="next-head"><link href="./maior.num_files/css" rel="stylesheet" type="text/css" class="next-head"><link href="./maior.num_files/saved_resource" rel="stylesheet" type="text/css" class="next-head"><meta name="viewport" content="initial-scale=1.0, width=device-width" class="next-head"><link href="./maior.num_files/saved_resource" rel="stylesheet" type="text/css" class="next-head"><style>
    * {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

html, body {
  min-height: 100%;
}

button {
  border-radius: 0;
}

.button {
  cursor: pointer;
  border: 0;
  outline: 0;
  height: 55px;
  padding: 0 50px;
  display: inline-block;
  letter-spacing: normal;
  word-spacing: normal;
  text-transform: none;
  text-indent: 0px;
  text-rendering: auto;
  align-items: flex-start;
  text-align: center;
  line-height: 55px;
}

.button:hover, .button:active, .button:focus {
  border: none;
}

a {
  color: #4183C4;
  text-decoration: none;
  cursor: pointer;
  border-bottom: 1px solid transparent;
}

a:hover, a:active, a:focus {
  border-bottom: 1px solid #4183C4;
}

header {
  position: fixed;
  top: 0;
  left: 0;
  z-index: 99;
  height: 60px;
  width: 100%;
  background-color: rgba(255, 255, 255, 0.9);
  border-bottom: 1px solid #ececec;
}

header .logo {
  position: absolute;
  left: 25px;
  height: 60px;
  line-height: 94px;
}

header .logo img {
  width: 116px;
}

#page {
  height: 100%;
  padding-top: 60px;
  padding-bottom: 433px;
}

@media all and (max-width : 720px) {
  #page {
    padding-bottom: 0;
  }
}

/* Blog */

.postItem {
  width: 720px;
  margin: 50px auto 50px;
}

.post-seperator {
  width: 800px;
  margin-top: 20px;
  margin-left: -40px;
  border-top: 1px solid #ececec;
}

.postItem:last-child .post-seperator {
  display: none;
}

.postItem img {
  display: block;
  margin: 50px auto;
  max-width: 100%;
}

.postItem img + em {
  display: block;
  text-align: center;
  margin-top: -40px;
  font-size: 18px;
}

@media all and (max-width : 800px) {
  .post-seperator {
    width: 100%;
    margin-left: auto;
  }
}

.postTitle a {
  font-size: 58px;
  line-height: 1.15;
  font-family: Raleway;
  font-weight: 100;
  color: #807F7F;
}

.postTitle a:hover {
  color: #4183C4
}

.postAuthor {
  font-family: Lato;
  font-weight: 300;
  font-size: 18px;
  margin-top: 15px;
  color: #807F7F;
}

.postContent {
  font-family: "Miller Text Rom", Georgia, Cambria, "Times New Roman", Times, serif;
  font-size: 18px;
  line-height: 1.6;
  margin-top: 45px;
  color: rgb(93, 91, 91);
}
.postContent h1,
.postContent h2,
.postContent h3,
.postContent h4,
.postContent h5 {
  color: rgb(76, 75, 75);
  font-family: Lato;
  font-weight: 400;
  margin-top: 10px;
}

.postContent h1 {
  font-size: 30px;
  color: rgb(63, 64, 63);
  margin-top: 20px;
}

.postContent h2 {
  font-size: 26px;
  margin-top: 20px;
}

.postContent h3 {
  font-size: 24px;
}

.postContent h4 {
  font-size: 22px;
}

.postContent h5 {
  font-size: 20px;
}

@media all and (max-width : 720px) {
  .postItem {
    width: auto;
    margin: 50px 18px;
  }

  .postTitle a {
    font-size: 36px;
  }

  .postContent {
    font-size: 18px
  }

  .postAuthor {
    font-size: 16px;
  }

  .postContent h1 {
    font-size: 28px;
  }

  .postContent h2 {
    font-size: 24px;
  }

  .postContent h3 {
    font-size: 22px;
  }

  .postContent h4 {
    font-size: 20px;
  }

  .postContent h5 {
    font-size: 18px;
  }
}

.postContent p {
  margin-top: 20px;
  margin-bottom: 20px;
}

.postContent ul {
  padding-left: 5px;
}

.postContent ol {
  padding-left: 25px
}

.postContent ul {
  list-style: none;
}

.postContent ul, .postContent ol {
  margin: 20px 0;
}

.postContent ul > li:before {
  font-size: 26px;
  content: "• ";
  line-height: 0;
  color: #807F7F;
}

/* Nested */
.postContent ul > li > ul > li:before {
  font-size: 26px;
  content: "◦ ";
  line-height: 0;
  color: #807F7F;
}

.postContent ul > li {
  padding-left: 1em;
  text-indent: -.7em;
}

.postContent ol > li {
  text-indent: 0;
}

.postContent li > ul,
.postContent li > ol {
  margin-left: 10px;
}

.postContent pre {
  overflow: auto;
  border: 1px solid #e1e1e8;
  padding: 12px;
  margin-top: 20px  ;
}

.postContent pre code {
  display: block;
  border-bottom: 1px solid #eee;
  overflow-x: auto;
}

.postContent code, .postContent pre {
  font-size: 12px;
  line-height: 18px;
  font-family: Consolas, 'Liberation Mono', Menlo, Courier, monospace;
}

.postContent pre code {
  color: #000;
  border: none;
}

.postContent blockquote {
  font-style: italic;
  border-left: 3px solid black;
  padding-left: 20px;
}

.readMore {
  margin-bottom: 20px;
}

/* Marketing */

.marketingPage {
  font-family: Raleway, sans-serif;
}

.marketingSection {
  text-align: center;
  line-height: 1;
  width: 100%;
  background-color: #fff;
}

.marketingSection:last-child {
  padding-bottom: 100px;
}

.marketingSection h3 {
  font-size: 61px;
  font-weight: 100;
}

.marketingSection > p {
  font-size: 22px;
  margin: 25px auto 0;
  max-width: 700px;
}

.includeTopBorder {
  border-top: 1px solid #ececec;
}

.marketingHeader {
  background-color: #fff;
  color: #807F7F;
  min-height: calc(100vh - 60px);
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  position: relative;
}

.marketingHeader .button {
  margin-top: 25px;
}

.marketingHeader .scrolldownWrapper {
  width: 40px;
  height: 40px;
  position: absolute;
  bottom: 30px;
  right: 0;
  left: 0;
  margin-right: auto;
  margin-left: auto;
  -webkit-animation-duration: 0.75s;
  animation-duration: 0.75s;
  -webkit-animation-fill-mode: both;
  animation-fill-mode: both;
}

.marketingHeader .scrolldown {
  width: 20px;
  height: 20px;
  border-right: 1px solid #807F7F;
  border-bottom: 1px solid #807F7F;
  transform: rotate(45deg);
  margin: auto;
}

@keyframes fadeInDown {
  0% {
     opacity: 0;
     transform: translateY(-40px);
  }
  100% {
     opacity: 1;
     transform: translateY(0);
  }
}

.fadeInDown {
  -webkit-animation-name: fadeInDown;
  animation-name: fadeInDown;
}

.marketingPage .actionButton {
  font-size: 19px;
  font-family: Questrial;
  color: #FFF;
  background-color: #F06A60;
  margin-top: 50px;
}

.marketingPage .actionButton:hover {
  background-color: #F1584B;
}

.featuresWrapper {
  max-width: 1200px;
  margin: 0 auto;
}

.marketingFeature {
  margin-top: 50px;
  max-width: 500px;
  text-align: left;
  display: inline-flex;
  line-height: 1.5;
}

.marketingFeature:nth-child(odd) {
  margin-right: 70px;
}

.marketingFeature .img {
  flex: 1;
  height: 100px;
  width: 100px;
  background-size: contain;
  background-repeat: no-repeat;
}

.cloudcode {
  background-image: url('/public/images/cloudcode.png')
}
.languages {
  background-image: url('/public/images/languages2.png')
}
.secure {
  background-image: url('/public/images/lock.png')
}
.console {
  background-image: url('/public/images/console2.png')
}

.marketingFeature .textWrapper {
  flex: 4;
  display: flex;
  flex-direction: column;
  justify-content: center;
  margin-left: 20px;
}

.marketingFeature .title {
  font-size: 19px;
  font-weight: 600;
  margin-bottom: 10px;
}

.marketingFeature .details {
  font-size: 17px;
}

.marketingCard {
  display: inline-block;
  vertical-align: top;
  width: 33.33%;
}

.marketingCard .cardImg {
  width: 185px;
  height: 185px;
  margin: auto;
  padding-bottom: 20px;
  background-size: contain;
  background-repeat: no-repeat;
}

.marketingCard h5 {
  color: #807F7F;
  font-size: 18px;
  width: 185px;
  margin: 30px auto 0;
  line-height: 1.5;
}

@media all and (max-width : 720px) {
  .marketingCard {
    display: block;
    width: auto;
  }

  .marketingSection h3 {
    font-size: 50px;
    font-weight: 100;
  }
}

/* Classrooms */

.taheader {
  background-color: rgb(81, 146, 179);
  color: #FFF;
}

.taheader .scrolldown {
  border-right: 1px solid #fff;
  border-bottom: 1px solid #fff;
}

.taabout {
  color: #807F7F;
  font-size: 22px;
  height: 300px;
}

.taabout p {
  padding-top: 100px;
  margin-bottom: 50px;
  line-height: 1.5;
}

.taabout a {
  color: #4183C4;
  text-decoration: none;
}

.aboutContact .twitter, .taabout .twitter {
  background-image: url('/public/images/twitter.png');
  display: inline-block;
  background-size: contain;
  height: 24px;
  width: 24px;
  background-repeat: no-repeat;
  vertical-align: text-bottom;
}

.taconnect {
  background-color: rgba(242, 242, 242, 0.4);
  color: #807F7F;
  min-height: 600px;
  padding: 50px 0;
}

.taconnect > p {
  font-size: 22px;
  padding-top: 100px;
}

.tacards {
  margin-top: 110px;
}

.cardImg.student {
  background-image: url('/public/images/student.png');
}

.cardImg.teacher {
  background-image: url('/public/images/teacher.png');
}

.cardImg.progress {
  background-image: url('/public/images/progress.png');
}

.taenvironment {
  color: #807F7F;
  height: 900px;
}

.taenvironment h3 {
  padding-top: 100px;
}

.studentEnvironmentImg {
  background-image: url('/public/images/studentenvironment.png');
  min-height: 500px;
  width: 1250px;
  background-size: cover;
  background-repeat: no-repeat;
  margin: 100px auto 0;
}

@media all and (max-width : 1280px) {
  .studentEnvironmentImg {
    height: 500px;
    width: 100%;
    background-size: contain;
  }
}

.tafeatures {
  color: #807F7F;
  background-color: rgba(242, 242, 242, 0.4);
  min-height: 500px;
  display: flex;
  align-items: center;
}

.taschools {
  background-color: #F2F2F3;
  height: 415px;
  padding: 0 15%;
}

.schoolsSlider {
  margin: 0 auto;
}

.taschools > p {
  padding-top: 100px;
  color: #807F7F;
  font-size: 22px;
  margin: 0 auto 100px;
}

.tauser_logo {
  display: inline-block;
  height: 90px;
  width: 100%;
  margin: auto;
  background-size: contain;
  background-repeat: no-repeat;
  background-position: center;
}

.alpha {
  background-image: url('/public/images/classrooms_clients/alpha_ps.png');
}
.columbia_uni_ny {
  background-image: url('/public/images/classrooms_clients/columbia_uni.png');
}
.coast_mountain_academy {
  background-image: url('/public/images/classrooms_clients/coast_mountain_academy.png');
}
.flocabulary {
  background-image: url('/public/images/classrooms_clients/flocabulary.png');
}
.guilsborough {
  background-image: url('/public/images/classrooms_clients/guilsborough.png');
}
.lonestar {
  background-image: url('/public/images/classrooms_clients/lonestar.png');
}
.madeira_city_schools {
  background-image: url('/public/images/classrooms_clients/madeira_city_schools.jpg');
}
.nait {
  background-image: url('/public/images/classrooms_clients/nait.png');
}
.perse {
  background-image: url('/public/images/classrooms_clients/perse.png');
}
.richard_college {
  background-image: url('/public/images/classrooms_clients/richard_college.png');
}
.sfusd {
  background-image: url('/public/images/classrooms_clients/sfusd.png');
}
.uni_of_oregon {
  background-image: url('/public/images/classrooms_clients/uni_of_oregon.png');
}
.utc_oxford {
  background-image: url('/public/images/classrooms_clients/utc_oxford.png');
}
.willington_academy {
  background-image: url('/public/images/classrooms_clients/willington_academy.png');
}
.workshop_college {
  background-image: url('/public/images/classrooms_clients/workshop_college.png');
}
.wyncode {
  background-image: url('/public/images/classrooms_clients/wyncode.png');
}

.tatestimonials {
  padding: 100px 15%;
}

.testimonial {
  margin-bottom: 100px;
  position: relative;
  max-width: 700px;
  margin: 0 auto;
}

.testimonialsSlider {
  width: 90%;
  max-width: 700px;
  margin: 0 auto;
}
.testimonial_auth_pic {
  border-radius: 100px;
  margin-bottom: 32px;
  height: 100px;
  width: 100px;
  margin: 0 auto 32px;
  background-size: contain;
  background-repeat: no-repeat;
}

.testimonial_quote {
  min-height: 90px;
  font-size: 20px;
  margin: 0 auto 42px;
  color: rgb(128, 127, 127);
  line-height: 28px;
  font-style: italic;
}

.quote {
  background-image: url('/public/images/quote.png');
  height: 30px;
  width: 22px;
  display: inline-block;
  background-size: contain;
  background-repeat: no-repeat;
  vertical-align: bottom;
}

.quote:nth-child(even) {
  transform: scaleX(-1);
  height: 18px;
  margin-left: 5px;
  vertical-align: text-bottom;
}

.testimonial_author_info {
  font-size: 20px;
  color: rgb(68, 67, 67);
}

.testimonial_arrow {
  position: absolute;
  top: 150px;
}

.prev.testimonial_arrow {
  left: -45px;
}

.next.testimonial_arrow {
  right: -45px;
}

.nguyen {
  background-image: url('/public/images/nguyen.png');
}

.steve {
  background-image: url('/public/images/steve.jpg');
}

.zach {
  background-image: url('/public/images/zach.jpg');
}

.quincy {
  background-image: url('/public/images/quincy.jpg');
}

.tasubscribe {
  height: 500px;
  display: flex;
  align-items: center;
  justify-content: center;
}

.tasubscribe h4 {
  font-size: 20px;
  margin-bottom: 42px;
  color: #303439;
}

.tasubscribe input {
  display: block;
  height: 46px;
  width: 348px;
  max-width: calc(100% - 40px);
  font-weight: 400;
  font-size: 19px;
  font-family: 'Questrial';
  text-align: center;
  border: 1px solid #BCBBBB;
  margin: auto auto 17px;
}

.ta_subscribe_button {
  height: 55px;
  width: 380px;
  max-width: calc(100% - 40px);
  font-weight: 400;
  font-size: 19px;
  font-family: 'Questrial';
  color: #FFF;
  background: #F06A60;
  text-shadow: none;
  margin: 0 auto;
  padding: 0;
  border: none;
}

.ta_subscribe_button:hover {
  background-color: #F1584B;
  color: #FFF;
  border: none;
}

#thanks {
  display: none;
}

/* Languages */

.langFeatures {
  color: #807F7F;
  min-height: 700px;
  background-color: rgba(242, 242, 242, 0.4);
}

.langFeatures h3 {
  padding-top: 100px;
}

.langFeatures p {
  margin-bottom: 80px;
}

.langCards {
  min-height: 440px;
}

.langCards > div {
  padding-top: 100px;
}

.cardImg.run {
  background-image: url('/public/images/cloudrun.png');
}
.cardImg.save {
  background-image: url('/public/images/cloudsave.png');
}
.cardImg.share {
  background-image: url('/public/images/cloudshare.png');
}

.langAbout {
  background-color: rgba(242, 242, 242, 0.4);
  min-height: 440px;
  color: #807F7F;
}

.langAbout h3 {
  padding-top: 100px;
}

.langAbout p {
  font-size: 19px;
  max-width: 700px;
  line-height: 1.5;
}

/* About us */

.aboutHeader h3 {
  color: #F06A60;
}

.aboutHeader p {
  line-height: 1.5;
}

.aboutTeam {
  color: #807F7F;
  border-top: 1px solid #ECECEC;
  min-height: 665px;
}

.aboutTeam > h3 {
  padding-top: 100px;
}

.teamMembers {
  margin-top: 100px;
}

.teamMembers .marketingCard {
  width: 20%;
}

@media all and (max-width : 720px) {
  .teamMembers .marketingCard {
    display: block;
    margin: 0 auto;
    margin-bottom: 30px;
    width: auto;
  }
}

.memberImg {
  border-radius: 100%;
}

.faris {
  background-image: url('/public/images/faris.jpg');
}
.amjad {
  background-image: url('/public/images/amjad.jpg');
}
.haya {
  background-image: url('/public/images/haya.jpg?x=1');
  position: relative;
  right: 10px;
}
.mason {
  background-image: url('/public/images/mason.png?x=1');
}

.memberName {
  font-size: 40px;
  font-weight: 100;
  margin-top: 20px;
}

.memberDescription {
  width: 100% !important;
  margin-top: 10px !important;
}

.memberTwitter {
  font-weight: normal;
}

.aboutContact {
  background-color: #F2F2F3;
  color: #807F7F;
  height: 400px;
}

.aboutContact h3 {
  padding-top: 100px;
  margin-bottom: 20px;
}

.aboutContact a {
  display: inline-block;
  margin-top: 25px;
  font-size: 18px;
}

@media all and (max-width : 720px) {
  .marketingSection.jobsSection .content {
    width: auto;
    margin: 50px 18px;
  }

  .jobsSection .content h3 {
    font-size: 22px;
  }

  .jobsSection .content p {
    font-size: 18px;
  }
}

/* Feedback */
.feedbackIframe {
  border: 0;
  box-sizing: border-box;
  max-height: 100%;
  border-left: 1px solid silver;
  border-right: 1px solid silver;
}

@media all and (max-width : 480px) {
  .feedbackIframe {
    margin-top: 20px;
    border: 0;
  }
}

/* Bot */

.slack-add {
  margin-right: 20px;
  display: inline-block;
  height: 40px;
  border: none;
}

.slack-add img {
  height: 40px;
  width: 140px;
  margin: 0;
  max-width: none;
}

.fb-msg {
  cursor:pointer;
  text-decoration:none;
  border: none;
}

.slack-add:hover, .fb-msg:hover {
  border: none;
  opacity: 0.8;
}

.fb-msg span {
  height: 40px;
  width: 139px;
  line-height: 40px;
  text-align: center;
  border-radius: 4px;
  background: #0084ff;
  color: #fff;
  font-size: 14px;
  display:inline-block;
  font-family: helvetica, arial, sans-serif;
  white-space: nowrap;
}

#landing-language-cycle{
  display: inline-block;
  text-align: left;
  width: 100px;
  white-space: nowrap;
}

.teacher-start-nav {
  background: #F7F8F9;
  color: #797B7C;
  padding: 0 1em;
}

.teacher-start-nav:hover {
  background: rgb(81, 146, 179);
  color: #fff;
}

.mainLandingHeader {
  padding: 1em 4em 2em 2em;
  font-size: 22px;
  min-height: calc(83vh - 60px);
}

.mainLandingHeader .teachers-start {
  height: 55px;
  width: 380px;
  max-width: calc(100% - 40px);
  font-weight: 400;
  font-size: 19px;
  font-family: 'Questrial';
  padding: 0;
  border: none;

  background: #F7F8F9;
  color: #797B7C;
}

.mainLandingHeader .teachers-start:hover {
  background: rgb(81, 146, 179);
  color: #FFF;
}

.mainLandingHeader .bot-container {
  position: relative;
  width: 380px;
  max-width: calc(100% - 40px);
  height: 35px;
  z-index: 2;
}

.mainLandingHeader .bot {
  position: absolute;
  bottom: -36px;
  right: 4px;
  width: 70px;
}

.mainLandingHeader .language-search-placeholder {
  background: #fff;
  min-height: 55px;
  width: 380px;
  line-height: 55px;
  border: 1px solid #4083C4;
  color: #000;
  font-size: 19px;
  padding-left: 12px;
  outline: none;
}

.mainLandingHeader .heading {
  margin-bottom: .75em;
  color: #2E4457;
}

.mainLandingHeader .heading.roles {
  font-style: italic;
}

.mainLandingHeader h2 {
  font-weight: 500;
}

.mainLandingHeader h4 {
  font-weight: 300;
  font-size: 1.25em;
}

.mainLandingHeader .title-em {
  font-weight: 800;
  font-style: normal;
}

.mainLandingFeatures,
.mainLandingClassroom {
  padding-top: 100px;
  padding-bottom: 100px;
}

.mainLandingFeatures p {
  margin-bottom: 50px;
}

.mainLandingClassroom {
  background: rgba(170,218,245,0.17);
}

.mainLandingClassroom h3 {
  color: rgb(81, 146, 179);
}

.mainLandingClassroom p,
.mainLandingClassroom p a {
  color: #807F7F;
  font-size: 22px;
  text-decoration: none;
}

.mainLandingClassroom .moreInfo {
  font-size: 16px;
}

.mainLandingClassroom .moreInfo:hover {
  border-bottom: 0;
  color: rgb(81, 146, 179);
}

.mainLandingClassroom p a:hover {
  border-bottom: 1px solid #807F7F;
}

.mainLandingClassroom .button {
  margin-top: 50px;
}

.mainLandingFeatures {
  color: #807F7F;
}

.mainLandingBlog {
  border-top: 1px solid #ececec;
}

.mainLandingBlog .subtitle {
  font-size: 22px;
  margin: 0 auto 50px;
  max-width: 700px;
  color: #807F7F;
  text-align: center;
  line-height: 1;
  width: 100%;
  background-color: #fff;
}

@media all and (min-width: 880px) {
  .mainLandingBlog .postItem {
    margin: 0;
    margin-left: 150px;
  }
}

.zero {
  font-size: 25px;
}

.introVideo {
  max-width: 820px;
  display: block;
  margin: 100px auto 100px;
  height: 100%;
  position: relative;
  background: black;
}

.taconnect .introVideo {
  margin: 100px auto 50px;
}

.introVideo .thumbnailWrapper {
  cursor: pointer;
}

.introVideo iframe,
.introVideo .thumb {
  max-width: 100%;
  width: 100%;
  display: block;
  height: 461px;
  border: none;
  top: 0;
  bottom: 0;
  margin: auto 0;
}

.introVideo .thumb {
  max-height: 461px;
  width: auto;
  height: auto;
}

.introVideo .play {
  position: absolute;
  margin: auto;
  left: 0;
  right: 0;
  top: 0;
  bottom: 0;
  display: inline-block;
  background-size: contain;
  height: 80px;
  width: 80px;
  background-repeat: no-repeat;
  background-image: url('/public/images/youtube-play.png');
}

.introVideo .thumbnailWrapper:hover .play{
  background-image: url('/public/images/youtube-play-hover.png');
}

@media all and (max-width: 830px) {
  .introVideo {
    max-width: 90%;
  }
}

@media all and (max-width: 600px) {
  .introVideo iframe {
    height: 320px;
  }

  .introVideo .thumb {
    max-height: 320px
  }

  .introVideo .play {
    height: 45px;
    width: 64px;
  }
}

@media all and (max-width: 480px) {
  .introVideo iframe {
    height: 230px;
  }

  .introVideo .thumb {
    max-height: 230px
  }

  .introVideo .play {
    height: 36px;
    width: 51px;
  }
}

/* Community */

.communityHeader .communityHeader1 {
  font-weight: bold;
  font-size: 30px;
  color: rgb(81, 146, 179);
}

.communityHeader .communityHeader2 {
  color: rgb(81, 146, 179);
}

.communityHeader .button,
.communityHeader p {
  margin-top: 50px;
}

.communityHeader > p {
  font-size: 18px;
}

.communityExplain {
  background-color: rgba(242, 242, 242, 0.4);
  color: #807F7F;
  padding: 50px 0;
  line-height: 27px;
}

.communityActions {
  margin-top: 70px;
}

.communityActions img {
  width: 140px;
}

.communityActions > div {
  display: inline-block;
  vertical-align: top;
  width: 25%;
}

.communityActions > div > p {
  width: 50%;
  margin: 0 auto;
  margin-top: 20px;
  line-height: 23px;
}

.communityStudentData {
  color: #807F7F;
  padding: 100px 300px;
}

.communityStudentData h3,
.communityStudentData p {
  margin-bottom: 50px;
}

@keyframes loader-fill-animation {
    0% { width: 0%; }
    90% { width: 100%; }
}

@keyframes loading-spinner {
    from { transform: rotate(0deg); }
    to { transform: rotate(360deg); }
}

.loading-spinner {
  width: 64px;
  height: 64px;

  background-image: url('/public/images/logo.svg');
  background-position: center;
  background-size: contain;

  transform: rotate(0deg);

  animation-name: loading-spinner;
  animation-duration: 2s;
  animation-timing-function: linear;
  animation-iteration-count: infinite;
}

.css-typer-character {
  animation-duration: 0.01s;
  animation-name: css-typer-show;
  animation-fill-mode: both;
}

@keyframes css-typer-show {
  from {
    opacity: 0;
  }

  to {
    opacity: 1;
  }
}

.page-close {
  position: absolute;
  top: 20px;
  right: 20px;
  background-image: url(/public/images/close.png);
  height: 15px;
  width: 15px;
  background-size: contain;
  background-position: center;
  background-repeat: no-repeat;
  cursor: pointer;
}

.page-close:hover {
  background-image: url(/public/images/close_hover.png);
}
</style><script type="text/javascript" async="" src="./maior.num_files/analytics.min.js.download"></script><script async="" src="./maior.num_files/analytics.js.download"></script><script src="./maior.num_files/polyfill.min.js.download" class="next-head"></script><script class="next-head">
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
    (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
    m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','https://www.google-analytics.com/analytics.js','ga');

    ga('create', 'UA-25629695-1', 'auto');
    ga('send', 'pageview');</script><script class="next-head">
    !function(){
      var analytics=window.analytics=window.analytics||[];if(!analytics.initialize)if(analytics.invoked)window.console&&console.error&&console.error("Segment snippet included twice.");else{analytics.invoked=!0;analytics.methods=["trackSubmit","trackClick","trackLink","trackForm","pageview","identify","reset","group","track","ready","alias","debug","page","once","off","on"];analytics.factory=function(t){return function(){var e=Array.prototype.slice.call(arguments);e.unshift(t);analytics.push(e);return analytics}};for(var t=0;t<analytics.methods.length;t++){var e=analytics.methods[t];analytics[e]=analytics.factory(e)}analytics.load=function(t){var e=document.createElement("script");e.type="text/javascript";e.async=!0;e.src=("https:"===document.location.protocol?"https://":"http://")+"cdn.segment.com/analytics.js/v1/"+t+"/analytics.min.js";var n=document.getElementsByTagName("script")[0];n.parentNode.insertBefore(e,n)};analytics.SNIPPET_VERSION="4.0.0";
    analytics.load('jdVID8rHoI7wkCBDjKmjApGBGWclWIKJ');
    analytics.page();
    }}();</script><link rel="preload" href="./maior.num_files/replEnvironment.js.download" as="script"><link rel="preload" href="./maior.num_files/_error.js.download" as="script"><link rel="preload" href="./maior.num_files/app.js.download" as="script"><style id="__jsx-3225118880">a.headerLink_notPrimary.jsx-3225118880:hover{color:#7896a3 !important;}
a.headerLink_primary.jsx-3225118880:hover{background-color:#5e7f8e !important;}</style><style id="__jsx-96056714">.wrapper.jsx-96056714{display:-webkit-box;display:-webkit-flex;display:-ms-flexbox;display:flex;height:100%;position:absolute;left:80px;max-width:50vw;text-overflow:ellipsis;padding-top:15px;box-sizing:border-box;font-family:"PT Mono",monospace;}
.info-wrapper.jsx-96056714{text-align:left;line-height:18px;max-width:calc(100% - 42px);}
.user-link.jsx-96056714{border-bottom:none;text-decoration:none;color:#4183C4;}
.anon-user-link.jsx-96056714{cursor:default;border-bottom:none;}
.user-link.jsx-96056714:hover{text-decoration:underline;}</style><style id="__jsx-520547632">a.jsx-520547632{position:absolute;right:40px;font-family:Questrial;color:rgb(119, 119, 119);height:60px;display:inline-block;line-height:60px;background:rgb(236, 236, 236);padding:0 15px;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none;width:100px;text-align:center;}
a.jsx-520547632:hover{border:0 !important;color:#7998a6;}
@media screen and (max-width:480px){a.jsx-520547632{right:10px;}}</style><style id="__jsx-578987328">.workspaceWrapper.jsx-578987328{height:100%;position:relative;display:-webkit-box;display:-webkit-flex;display:-ms-flexbox;display:flex;}
.windowManagerWrapper.jsx-578987328{-webkit-flex:5;-ms-flex:5;flex:5;height:100%;}</style><style id="__jsx-2237786563">.share-wrapper.jsx-2237786563{position:relative;}
.save-status.jsx-2237786563{display:-webkit-box;display:-webkit-flex;display:-ms-flexbox;display:flex;-webkit-align-items:center;-webkit-box-align:center;-ms-flex-align:center;align-items:center;position:absolute;left:0px;top:0px;margin-left:60px;height:100%;font-family:Questrial;opacity:0.7;border:0;color:rgb(180, 180, 180);}
.save-status.jsx-2237786563:hover{color:#7998a6;}
.save-status.jsx-2237786563 .history-icon.jsx-2237786563{width:18px;height:16px;margin-right:5px;}
.save-status.jsx-2237786563:hover span.jsx-2237786563{border-bottom:1px solid #7998a6;}
.share-box.jsx-2237786563{position:absolute;top:calc(100% + 12px);left:calc(-180px + 50%);display:-webkit-box;display:-webkit-flex;display:-ms-flexbox;display:flex;width:360px;-webkit-flex-direction:column;-ms-flex-direction:column;flex-direction:column;place-content:center space-around;-webkit-align-items:flex-start;-webkit-box-align:flex-start;-ms-flex-align:flex-start;align-items:flex-start;padding:30px 0px;background:#fff;border:1px solid rgb(236,237,236);opacity:1;z-index:10;font-family:Questrial,sans-serif;-webkit-transition:opacity 0.4s;transition:opacity 0.4s;pointer-events:auto;}</style><style id="__jsx-620985322">.icon-button.jsx-620985322{background-size:contain;background-repeat:no-repeat;background-position:center;background-image:url(/public/images/download.svg);opacity:1;cursor:pointer;height:18px;width:18px;}
.icon-button.jsx-620985322:hover{background-image:url(/public/images/download_hover.svg);}</style><style id="__jsx-2206701834">.icon-button.jsx-2206701834{background-size:contain;background-repeat:no-repeat;background-position:center;background-image:url(/public/images/upload_button.svg);opacity:1;cursor:pointer;height:18px;width:18px;}
.icon-button.jsx-2206701834:hover{background-image:url(/public/images/upload_button_hover.svg);}</style><style id="__jsx-1742442620">.wrapper.jsx-1742442620{width:100%;height:100%;display:-webkit-box;display:-webkit-flex;display:-ms-flexbox;display:flex;-webkit-flex-direction:column;-ms-flex-direction:column;flex-direction:column;}
.menu.jsx-1742442620{position:absolute;right:-5em;top:75%;z-index:5;padding:.5em;color:rgb(119, 119, 119);border:solid 1px rgb(236, 236, 236);background:#fff;cursor:default;}
.menu-button.jsx-1742442620{cursor:pointer;padding:.5em;}
.menu-button.jsx-1742442620:hover{color:#ffffff;background:#7998a6;}
.menu-button.delete.jsx-1742442620{color:#d56d6d;}
.menu-button.delete.jsx-1742442620:hover{color:#ffffff;background:#d56d6d;}
.tab-bar.jsx-1742442620{font-family:Questrial;background-color:#ffffff;border-bottom:1px solid rgb(236, 236, 236);padding:.25em 1em 0 1em;}
.tab.jsx-1742442620{display:inline-block;position:relative;margin-left:0.25em;margin-right:0.25em;padding:0.75em 1.25em;border-top:1px solid rgb(236, 236, 236);border-bottom:none;border-left:1px solid rgb(236, 236, 236);border-right:1px solid rgb(236, 236, 236);background-color:rgb(245, 245, 245);color:rgb(119, 119, 119);font-size:12px;font-family:Questrial;cursor:pointer;}
.tab.jsx-1742442620:active{background-color:#ffffff;}
.tab.jsx-1742442620:hover{color:#7998a6;}
.tab-active.jsx-1742442620{bottom:-1px;color:#7998a6;background-color:#ffffff;border-top:1px solid rgb(236, 236, 236);border-bottom:none;border-left:1px solid rgb(236, 236, 236);border-right:1px solid rgb(236, 236, 236);}
.tab-options.jsx-1742442620{position:absolute;right:0;top:0;bottom:0;width:12px;cursor:pointer;background-image:url(/public/images/menu.png);background-position:center;background-size:3px 14px;background-repeat:no-repeat;}
.tab-options.jsx-1742442620:hover{background-image:url(/public/images/menu_hover.png);}
.new-tab.jsx-1742442620{width:18px;height:18px;display:inline-block;cursor:pointer;background-image:url(/public/images/new_file.png);background-position:center;background-size:contain;background-repeat:no-repeat;vertical-align:middle;}
.new-tab.jsx-1742442620:hover{background-image:url(/public/images/new_file_hover.png);}
.tab-with-status.jsx-1742442620{padding-left:1.6em;}
.workspace-alert-status{height:14px;position:absolute;left:3px;}</style><style id="__jsx-3485800696">#nprogress{pointer-events:none;}
.nprogress-bar{background:#4183C4;position:fixed;z-index:400001;top:0;left:0;width:100%;height:2px;}
.nprogress-static-css-bar{width:0;-webkit-animation:10s ease-out 750ms 1 normal both running nprogress-widen;animation:10s ease-out 750ms 1 normal both running nprogress-widen;}
@-webkit-keyframes nprogress-widen{0%{width:0;}100%{width:90%;}}
@keyframes nprogress-widen{0%{width:0;}100%{width:90%;}}
.nprogress-peg{display:block;position:absolute;right:0px;width:100px;height:100%;box-shadow:0 0 10px #4183C4,0 0 5px #4183C4;opacity:1.0;-webkit-transform:rotate(3deg) translate(0px,-4px);-ms-transform:rotate(3deg) translate(0px,-4px);-webkit-transform:rotate(3deg) translate(0px,-4px);-ms-transform:rotate(3deg) translate(0px,-4px);transform:rotate(3deg) translate(0px,-4px);}
.nprogress-spinner{display:block;position:fixed;z-index:1031;top:15px;right:15px;}
.nprogress-spinner-icon{width:18px;height:18px;box-sizing:border-box;visibility:hidden;border:solid 2px transparent;border-top-color:#29d;border-left-color:#29d;border-radius:50%;-webkit-animation:nprogress-spinner 400ms linear infinite;-webkit-animation:nprogress-spinner 400ms linear infinite;animation:nprogress-spinner 400ms linear infinite;-webkit-animation-delay:11s;animation-delay:11s;}
@-webkit-keyframes nprogress-spinner{0%{-webkit-transform:rotate(0deg);visibility:visible;}100%{-webkit-transform:rotate(360deg);}}
@-webkit-keyframes nprogress-spinner{0%{-webkit-transform:rotate(0deg);visibility:visible;}100%{-webkit-transform:rotate(360deg);-ms-transform:rotate(360deg);transform:rotate(360deg);}}
@keyframes nprogress-spinner{0%{-webkit-transform:rotate(0deg);visibility:visible;}100%{-webkit-transform:rotate(360deg);-ms-transform:rotate(360deg);transform:rotate(360deg);}}</style><script type="text/javascript" src="./maior.num_files/ace.js.download"></script><script type="text/javascript" charset="utf-8" async="" src="./maior.num_files/app_components_PortalWrapper_react_492e33e8f6a295a7e7d16a43b7465ec4.js.download"></script><style type="text/css" data-styled-jsx=""></style><style id="ace_editor.css">.ace_editor {position: relative;overflow: hidden;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;text-align: left;-webkit-tap-highlight-color: rgba(0, 0, 0, 0);}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;min-width: 100%;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;text-indent: -1em;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: inherit;color: inherit;z-index: 1000;opacity: 1;text-indent: 0;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;}.ace_text-layer {font: inherit !important;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {-webkit-transition: opacity 0.18s;transition: opacity 0.18s;}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;}.ace_line .ace_fold {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: -webkit-linear-gradient(top, transparent, rgba(0, 0, 0, 0.1));background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {-webkit-transition: opacity 0.4s ease 0.05s;transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {-webkit-transition: opacity 0.05s ease 0.05s;transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}.ace_text-input-ios {position: absolute !important;top: -100000px !important;left: -100000px !important;}
/*# sourceURL=ace/css/ace_editor.css */</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style>.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #CAD6FA;    z-index: 1;}.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid #abbffe;    margin-top: -1px;    background: rgba(233,233,253,0.4);}.ace_editor.ace_autocomplete .ace_line-hover {    position: absolute;    z-index: 2;}.ace_editor.ace_autocomplete .ace_scroller {   background: none;   border: none;   box-shadow: none;}.ace_rightAlignedText {    color: gray;    display: inline-block;    position: absolute;    right: 4px;    text-align: right;    z-index: -1;}.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #000;    text-shadow: 0 0 0.01em;}.ace_editor.ace_autocomplete {    width: 280px;    z-index: 200000;    background: #fbfbfb;    color: #444;    border: 1px lightgray solid;    position: fixed;    box-shadow: 2px 3px 5px rgba(0,0,0,.2);    line-height: 1.4;}</style><script src="./maior.num_files/mode-c_cpp.js.download"></script></head><body><div><div id="__next"><div data-reactroot=""><div style="position:relative;min-height:100vh"><div id="modal-root"></div><div style="position:absolute;left:0;top:0;right:0;background:#F4F4F4;border-bottom:1px solid #E4E4E4;height:60px;text-align:center"><a style="position:absolute;left:25px;height:60px;line-height:94px;width:45px;overflow:hidden;border-bottom:none" href="https://repl.it/languages" class="jsx-3225118880 headerLink_notPrimary"><img style="width:116px" src="./maior.num_files/logo-small.png" alt="repl.it"></a><div class="jsx-96056714 wrapper"><a style="border-bottom: none;"><div class="jsx-3986979567 profile-icon profile-icon-m" style="background-image: url(&quot;https://www.gravatar.com/avatar/?d=https://repl.it/public/images/evalbot/evalbot_17.png&amp;s=256&quot;); margin-right: 10px; width: 32px; height: 32px; flex-shrink: 0;"></div></a><div class="jsx-96056714 info-wrapper"><div style="font-size:14px;white-space:nowrap;overflow:hidden;text-overflow:ellipsis;max-width:100%" class="jsx-96056714"><a class="jsx-96056714 anon-user-link">@<!-- -->anonymous</a>/<!-- -->InsecureStrictStartup</div><div style="display:flex;max-width:100%" class="jsx-96056714"><img alt="C" title="C" src="./maior.num_files/c.svg" style="height:16px;vertical-align:middle;margin-right:4px" class="jsx-96056714"><p style="font-size:12px;color:#787A7B;font-family:Questrial,sans-serif;white-space:nowrap;overflow:hidden;text-overflow:ellipsis;max-width:100%" class="jsx-96056714">No description</p></div></div><div style="position:relative;width:15px;height:15px;margin-left:5px;margin-top:1px" data-radium="true"><div data-radium="true"><div style="background-size: contain; background-repeat: no-repeat; background-position: center center; cursor: pointer; width: 15px; height: 15px; background-image: url(&quot;/public/images/edit.png&quot;);" data-radium="true"></div></div></div></div><div style="position:relative;z-index:100000"><div><a class="jsx-520547632">Sign up</a></div></div></div><div id="page" style="padding-bottom:0"><div style="height:calc(100vh - 60px)"><div class="jsx-578987328 workspaceWrapper"><div class="jsx-578987328 windowManagerWrapper"><div style="height:100%"><div style="height:100%;display:flex;flex-direction:row"><div style="z-index:1;width:calc(50% - 5.5px);height:100%;display:flex;flex-direction:column"><div style="z-index:auto;height:50px;width:100%"><div style="display:flex;justify-content:center;align-items:center;height:50px;position:relative" class="jsx-2237786563"><div style="position:absolute;top:0;left:0;margin:15px"><div><div style="cursor:pointer;display:flex;justify-content:center;align-items:center;font-size:25px" class="jsx-2237786563"><div style="background-image:url(/public/images/settings_gear.png);height:22px;width:22px;background-size:contain;background-position:center;background-repeat:no-repeat;:hover:[object Object]" class="jsx-2237786563"></div></div></div></div><a class="jsx-2237786563 save-status" href="https://repl.it/repls/InsecureStrictStartup/history"><div class="jsx-2237786563 history-icon"><svg id="Layer_1_copy_5" data-name="Layer 1 copy 5" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 21.051 18.415"><defs><style>
            .cls-1,.cls-2 {
              fill:currentColor;
            }
            .cls-1 {
              fill-rule:evenodd;
            }
          </style></defs><title>HistoryIcon</title><path class="cls-1" d="M9.813,6.732a.485.485,0,0,1,.02-.154.262.262,0,0,1,.409-.139c.249.159,2.758,1.8,3.766,2.453a.47.47,0,0,1,.071.7.366.366,0,0,1-.067.052l-3.736,2.436a.314.314,0,0,1-.246.068.3.3,0,0,1-.217-.306C9.813,11.386,9.813,7.578,9.813,6.732Z"></path><path class="cls-2" d="M19.595,7.041A8.324,8.324,0,0,0,18.053,4a8.49,8.49,0,0,0-2.638-2.208A8.3,8.3,0,0,0,12.246.837,8.286,8.286,0,0,0,5.918,2.96,10.2,10.2,0,0,0,3.3,7.162C2.879,6.6,2.362,5.925,2.093,5.568,1.9,5.312,1.9,5.312,1.652,5.5c-.114.087-.228.174-.342.26-.229.171-.229.171-.059.4C2.062,7.23,2.877,8.3,3.679,9.38c.123.165.208.2.394.09,1.184-.683,2.375-1.354,3.564-2.025.032-.018.062-.032.094-.048a.106.106,0,0,0,.045-.147c-.14-.247-.232-.405-.331-.6-.084-.169-.173-.187-.334-.092-.643.375-2.035,1.154-2.083,1.178l-.263.15A10.5,10.5,0,0,1,7.7,3.694a6.579,6.579,0,0,1,3.271-1.133,6.85,6.85,0,0,1,2.847.38,6.353,6.353,0,0,1,2.039,1.195A6.53,6.53,0,0,1,18.1,8.382a6.415,6.415,0,0,1-.465,3.4,6.472,6.472,0,0,1-5.083,3.976,6.43,6.43,0,0,1-2.325-.037,6.538,6.538,0,0,1-2.111-.788,6.094,6.094,0,0,1-1.643-1.4.62.62,0,0,0-.948-.08,2.874,2.874,0,0,1-.278.221.622.622,0,0,0-.124.968,8.162,8.162,0,0,0,1.5,1.377A8.57,8.57,0,0,0,9.387,17.3a8.145,8.145,0,0,0,2.076.273h.089a8.23,8.23,0,0,0,2.72-.487,8.452,8.452,0,0,0,3.954-2.945,8.266,8.266,0,0,0,1.369-7.1ZM4.5,8.032l0-.006h.014Z"></path></svg></div><span class="jsx-2237786563">saved</span></a><div style="margin-left: 10px; width: auto;" class="jsx-2237786563 share-wrapper"><div class="jsx-4027189720 workspace-button"><span class="jsx-4027189720">share</span><span style="height:16px;width:20px" class="jsx-4027189720 workspace-button-icon"></span></div></div><div style="position: relative; margin-left: 10px; width: auto;"><div><div class="jsx-3436062424 workspace-button"><span class="jsx-3436062424">run</span><span style="height: 13px; width: 12.5px;" class="jsx-3436062424 workspace-button-icon"></span></div></div></div><div style="position:absolute;right:0;display:flex;margin-right:.35em" class="jsx-2237786563"><div style="position:relative;margin:.4em"><div><a href="https://repl.it/repls/InsecureStrictStartup.zip" target="_blank" download="" class="jsx-2237786563"><div class="jsx-620985322 icon-button"></div></a></div></div><div style="position:relative;margin:.4em"><div><div class="jsx-2206701834 icon-button"></div></div></div></div></div></div><div style="z-index:1;height:calc(100% - 50px);width:100%" class="jsx-1742442620 wrapper"><div class="jsx-1742442620 tab-bar"><div class="jsx-1742442620 tab tab-active">main.c</div><div style="position:relative;display:inline-block"><div><div class="jsx-1742442620 new-tab"></div></div></div></div><div class="jsx-728821476 jsx-816848914" style="height: auto; position: relative; width: 100%; flex: 1 1 0%; display: block;"><div class="" style="position: relative; min-height: 60px; border-top: 0px; height: 100%;"><div class=" ace_editor ace-tm ace_focus" style="position: relative; height: 100%; font-size: 14px;" draggable="false"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; height: 17px; width: 7.6975px; left: 60.6975px; top: 374px;"></textarea><div class="ace_gutter"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="margin-top: 0px; height: 500px; width: 49px;"><div class="ace_gutter-cell " style="height: 17px;">1</div><div class="ace_gutter-cell " style="height: 17px;">2</div><div class="ace_gutter-cell " style="height: 17px;">3<span class="ace_fold-widget ace_start ace_open" style="height: 17px;"></span></div><div class="ace_gutter-cell " style="height: 17px;">4</div><div class="ace_gutter-cell " style="height: 17px;">5</div><div class="ace_gutter-cell " style="height: 17px;">6</div><div class="ace_gutter-cell " style="height: 17px;">7</div><div class="ace_gutter-cell " style="height: 17px;">8</div><div class="ace_gutter-cell " style="height: 17px;">9</div><div class="ace_gutter-cell " style="height: 17px;">10<span class="ace_fold-widget ace_start ace_open" style="height: 17px;"></span></div><div class="ace_gutter-cell " style="height: 17px;">11</div><div class="ace_gutter-cell " style="height: 17px;">12</div><div class="ace_gutter-cell " style="height: 17px;">13</div><div class="ace_gutter-cell " style="height: 17px;">14</div><div class="ace_gutter-cell " style="height: 17px;">15</div><div class="ace_gutter-cell " style="height: 17px;">16</div><div class="ace_gutter-cell " style="height: 17px;">17</div><div class="ace_gutter-cell " style="height: 17px;">18</div><div class="ace_gutter-cell " style="height: 17px;">19</div><div class="ace_gutter-cell " style="height: 17px;">20</div><div class="ace_gutter-cell " style="height: 17px;">21</div><div class="ace_gutter-cell " style="height: 17px;">22</div><div class="ace_gutter-cell " style="height: 17px;">23</div></div><div class="ace_gutter-active-line" style="top: 374px; height: 17px;"></div></div><div class="ace_scroller" style="left: 49px; right: 0px; bottom: 0px;"><div class="ace_content" style="margin-top: 0px; width: 629px; height: 500px; margin-left: 0px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 619.8px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height:17px;top:374px;left:0;right:0;"></div><div class="ace_bracket ace_start ace_br15" style="height:17px;width:7.6975px;top:34px;left:4px;"></div></div><div class="ace_layer ace_text-layer" style="padding: 0px 4px;"><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;stdio.h&gt;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_storage ace_type">int</span> <span class="ace_identifier">num</span><span class="ace_paren ace_lparen">[</span><span class="ace_constant ace_numeric">10</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_storage ace_type">int</span> <span class="ace_identifier">maior</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_constant ace_numeric">10</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_paren ace_lparen">{</span> </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string">Entre com um número: </span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">scanf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span><span class="ace_keyword ace_operator">&amp;</span><span class="ace_identifier">num</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_indent-guide">  </span>  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">num</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span><span class="ace_keyword ace_operator">&gt;</span><span class="ace_identifier">maior</span><span class="ace_paren ace_rparen">)</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_identifier">maior</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">num</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_indent-guide">  </span>  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string">Maior número digitado: </span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span><span class="ace_identifier">maior</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  <span class="ace_keyword ace_control">return</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px">  </div></div><div class="ace_line_group" style="height:17px"><div class="ace_line" style="height:17px"><span class="ace_paren ace_rparen">}</span></div></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer"><div class="ace_cursor" style="left: 11.6975px; top: 374px; width: 7.6975px; height: 17px; opacity: 0;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="display: none; width: 22px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 22px; height: 391px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 49px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 637px;"></div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-weight: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-weight: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;"></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></div></div></div></div><div style="height:100%;position:relative;display:flex;justify-content:center;align-items:center;z-index:1000;background:#DDD;flex:1 0 auto;overflow:hidden;cursor:col-resize;width:11px"><div style="height: 25px; border-right: 1px solid rgb(119, 120, 121);"></div></div><div style="z-index: 1; width: calc(50% - 5.5px); height: 100%; background-color: rgb(14, 22, 40);"><div class="jsx-3552593814" style="height: 100%; position: relative;"><div class="jsx-3552593814 terminal-opts"><span title="Input" class="jsx-3552593814 input-wrapper"><svg height="20" viewBox="0 0 48 48" width="20" xmlns="http://www.w3.org/2000/svg" class="jsx-3552593814 input-icon"><path d="M0 0h48v48h-48z" fill="none" class="jsx-3552593814"></path><path d="M42 6.02h-36c-2.21 0-4 1.79-4 4v7.98h4v-8.02h36v28.06h-36v-8.04h-4v8.02c0 2.21 1.79 3.96 4 3.96h36c2.21 0 4-1.76 4-3.96v-28c0-2.21-1.79-4-4-4zm-20 25.98l8-8-8-8v6h-20v4h20v6z" class="jsx-3552593814"></path></svg></span><span title="Clear" class="jsx-3552593814 clear-button"></span></div><div id="console" class="jsx-3552593814" style="position: relative; height: 100%;"><div style="position: absolute; left: 25%; right: 25%; top: 47%; height: 7px; background-color: transparent; border-style: solid; border-width: 1px; border-radius: 10px; border-color: rgb(255, 255, 255); transition: opacity 0.5s; z-index: 1; opacity: 0;"><div style="width: 100%; height: 5px; background-color: rgb(255, 255, 255);"></div></div><div style="top: 0px; left: 0px; right: 0px; bottom: 0px; position: absolute; overflow: auto;"><pre class="jqconsole jqconsole-blurred" style="margin: 0px; position: relative; min-height: 100%; box-sizing: border-box;"><span class="jqconsole-header"></span><span></span><span class="jqconsole-old-prompt"></span><span class="error"></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span class="jqconsole-old-input"></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-prompt"></span><span class="error"></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span></span><span class="jqconsole-old-prompt"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span class="jqconsole-old-input"></span><span></span><span><span class="">gcc version 4.6.3
</span></span><span class="jqconsole-old-prompt"><span class="">   
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 1
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 5
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 8
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 9
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 6
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 3
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 5
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 2
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 8
</span></span><span><span class="">
Entre com um número: </span></span><span class="jqconsole-old-input"><span class=""> 7
</span></span><span><span class="">
Maior número digitado: 9</span></span><span class="jqconsole-prompt "><span class="jqconsole-prompt-text"></span><span><span>   </span><span class="jqconsole-prompt-text"></span><span class="jqconsole-cursor" style="color: transparent; display: inline; z-index: 0; position: absolute;">&nbsp;</span><span class="jqconsole-prompt-text" style="position: relative;"></span></span><span class="jqconsole-prompt-text"></span></span></pre><div style="position: absolute; width: 1px; height: 0px; overflow: hidden; left: 214.813px; top: 405px;"><textarea wrap="off" autocapitalize="off" autocorrect="off" spellcheck="false" autocomplete="off" style="position: absolute; width: 2px;"></textarea></div></div></div></div></div></div></div></div></div></div></div></div></div></div><div id="__next-error"></div></div><div><script>
          __NEXT_DATA__ = {"props":{"isServer":true,"store":{},"initialState":{"user":{"userInfo":{"fetchState":"idle"},"billingInfo":{"isFetching":false}},"messages":{"queue":[]},"plans":{"data":{}},"replEnvironment":{"isForking":false,"activeWid":"/repls/InsecureStrictStartup"},"repls":{"data":{"9aca3975-8fbf-488c-a239-31fc77da4520":{"id":"9aca3975-8fbf-488c-a239-31fc77da4520","userId":null,"title":"InsecureStrictStartup","description":null,"isProject":false,"isPrivate":false,"timeCreated":"2018-02-19T22:49:45.612Z","timeUpdated":"2018-02-19T22:49:45.598Z","views":0,"contentLength":0,"language":"c","originId":null,"slug":"InsecureStrictStartup","url":"/repls/InsecureStrictStartup","fileNames":[],"editorText":"#include \"stdio.h\"\n\nint main(void) {\n  printf(\"Hello World\\n\");\n  return 0;\n}","isOwner":true}}},"replsByUrl":{"/repls/InsecureStrictStartup":"9aca3975-8fbf-488c-a239-31fc77da4520"},"replsByUser":{"null":["9aca3975-8fbf-488c-a239-31fc77da4520"]},"workspace":{"/repls/InsecureStrictStartup":{"language":"c","layout":{"floating":[],"tiling":{"type":"split","fixed":false,"left":{"type":"split","stacked":true,"fixed":true,"hideHandle":true,"leftSize":"50px","left":{"type":"pane","parid":"toolbar"},"right":{"type":"tabs","active":0,"tabs":[{"parid":"file-0","type":"pane"}],"newTab":true,"closeTab":true,"renameTab":true}},"right":{"type":"pane","parid":"output"}}},"parts":{"libs":{"type":"libsearch","title":"library search","forceRender":false,"alertStatus":"none"},"examples":{"type":"examples","title":"examples","state":{"loading":false},"forceRender":false,"alertStatus":"none"},"prefs":{"type":"preferences","title":"preferences","forceRender":false,"alertStatus":"none"},"toolbar":{"type":"toolbar","title":"toolbar","state":{"running":false},"forceRender":false,"alertStatus":"none"},"output":{"type":"console","title":"console","state":{"consoleMessages":[],"loadingEngine":false,"running":false,"presetStdin":"","promptValue":""},"forceRender":false,"alertStatus":"none"},"repl":{"type":"goval","title":"repl","state":{"engineHandle":null,"debuggerHandle":null,"loadingEngine":false,"running":false,"debugging":false},"forceRender":false,"alertStatus":"none"},"file-0":{"type":"editor","title":"main.c","state":{"sessionHandle":null,"readonly":false,"filePath":"9aca3975-8fbf-488c-a239-31fc77da4520/__replit_main__","annotations":[],"activeLine":null},"forceRender":false,"alertStatus":"none"}},"files":["9aca3975-8fbf-488c-a239-31fc77da4520/__replit_main__"],"activeFile":"9aca3975-8fbf-488c-a239-31fc77da4520/__replit_main__","govalToken":"ZXlKamNtVmhkR1ZrSWpveE5URTVNRGd3TlRnMk56QTRMQ0p1WlhRaU9uUnlkV1Y5OnYybGFvZldvNHdxemZhbTFpWEhqTTJzT29kNXpsTkJaL0tKcEpFc01EMW89"}},"files":{"9aca3975-8fbf-488c-a239-31fc77da4520/__replit_main__":{"content":{"asEncoding":{"base64":"I2luY2x1ZGUgInN0ZGlvLmgiCgppbnQgbWFpbih2b2lkKSB7CiAgcHJpbnRmKCJIZWxsbyBXb3JsZFxuIik7CiAgcmV0dXJuIDA7Cn0="},"asBuffer":null},"synced":true,"deleted":false,"editable":true}},"profiles":{"data":{}},"preferences":{"isLayoutStacked":false,"theme":"textmate","fontSize":14,"indentIsSpaces":true,"indentSize":2,"keyboardHandler":null,"wrapping":true,"autocomplete":true,"primarySplitPosition":60,"infiniteLoopProtection":true,"hideSnackModal":false,"hideFeaturedClassrooms":false,"hideSuggestedClassrooms":false}},"initialProps":{"location":"/replEnvironment","isMobile":false}},"pathname":"/replEnvironment","query":{},"buildId":"109c740c-f386-4666-9663-10f7d1598e0f","buildStats":{"app.js":{"hash":"122ff5d54d5e89d01fc0cd64c0094c4c"}},"assetPrefix":"","nextExport":false,"err":null,"chunks":[]}
          module={}
          __NEXT_LOADED_PAGES__ = []
          __NEXT_LOADED_CHUNKS__ = []

          __NEXT_REGISTER_PAGE = function (route, fn) {
            __NEXT_LOADED_PAGES__.push({ route: route, fn: fn })
          }

          __NEXT_REGISTER_CHUNK = function (chunkName, fn) {
            __NEXT_LOADED_CHUNKS__.push({ chunkName: chunkName, fn: fn })
          }
        </script><script async="" id="__NEXT_PAGE__/replEnvironment" type="text/javascript" src="./maior.num_files/replEnvironment.js.download"></script><script async="" id="__NEXT_PAGE__/_error" type="text/javascript" src="./maior.num_files/_error.js.download"></script><div></div><script type="text/javascript" src="./maior.num_files/app.js.download" async=""></script></div><div class=" ace_editor ace_autocomplete ace-tm" style="font-size: 14px; height: 38px; left: 71.0925px; top: 318px; display: none;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0;"></textarea><div class="ace_gutter" style="display: none;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="margin-top: 0px;"></div><div class="ace_gutter-active-line" style="display: none;"></div></div><div class="ace_scroller" style="left: 0px; right: 0px; bottom: 0px;"><div class="ace_content" style="cursor: default; margin-top: 0px; width: 278px; height: 76px; margin-left: 0px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 619.8px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height:19px;top:0px;left:0;right:0;"></div></div><div class="ace_layer ace_text-layer" style="padding: 0px 4px;"><div class="ace_line ace_selected" style="height:19px"><span class="ace_completion-highlight">1</span><span class="ace_">0</span><span class="ace_rightAlignedText">local</span></div><div class="ace_line" style="height:19px"><span class="ace_">char</span><span class="ace_completion-highlight">1</span><span class="ace_">6_t</span><span class="ace_rightAlignedText">keyword</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors" style="opacity: 0;"><div class="ace_cursor" style="left: 4px; top: 0px; width: 7.6975px; height: 19px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 22px; bottom: 0px; display: none;"><div class="ace_scrollbar-inner" style="width: 22px; height: 38px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 0px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 261px;"></div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-weight: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-weight: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;"></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></body></html>