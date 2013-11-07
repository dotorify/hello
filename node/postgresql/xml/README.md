# node/postgresql


## INSTALL

이 테스트를 수행하기 위해서는 `libpq-dev 패키지`와 `pg 모듈`이 필요하다.

    sudo apt-get install libpq-dev
    npm install pg

## FILE LIST

- composition.xml: XML 데이터
- create-db.js: 테스트용 테이블(xml_test) 생성
- drop-db.js: 테스트용 테이블(xml_test) 삭제
- hello-world.js: PostgreSQL과 연결 테스트. 연결이 안되면 계정과 비밀번호를 변경한다.
- insert-data.js: 테스트용 테이블(xml_test)에 'composition.xml'을 1개 삽입한다.


## 참고자료

- [Insert XML from file in PostgreSQL @ StackOverflow](http://stackoverflow.com/questions/15611304/insert-xml-from-file-in-postgresql)
