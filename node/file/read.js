var fs = require('fs');

/* 비동기 예제
 */
fs.readFile('sample.txt', 'utf-8', function (err, data){
    if(err)
        console.log(err);

    console.log(data);
});

/* 동기 예제
 */
var data = fs.readFileSync('sample.txt', 'utf-8');
console.log(data);
