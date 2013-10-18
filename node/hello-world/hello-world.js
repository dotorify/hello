//var sys = require("sys");     // Sys is changed to util
var sys = require("util");

setTimeout(function() {
    sys.puts("world");
}, 2000);

sys.puts("hello");
