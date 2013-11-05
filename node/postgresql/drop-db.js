var pg = require('pg');
//or native libpq bindings
//var pg = require('pg').native

var conString = "postgres://postgres:123@localhost/postgres";

var client = new pg.Client(conString);
client.connect(function(err) {
    if(err) {
        return console.error('could not connect to postgres', err);
    }
    client.query('DROP TABLE xmldemo;', function(err, result) {
        if(err) {
            return console.error('error running query', err);
        }
        client.end();
    });
});

