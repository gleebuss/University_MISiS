#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "queuep.h"

TEST_CASE("Push_random_1") {
	QueueP q;
	int size = 8;
	std::vector<int> v(size);
		
	random(v,q,size);

	CHECK(v == q.drop() );
}

TEST_CASE("Push_random_2") {
	QueueP q;
	int size = 16;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v == q.drop());
}

TEST_CASE("Push_random_3") {
	QueueP q;
	int size = 32;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v == q.drop());
}

TEST_CASE("Push_random_4") {
	QueueP q;
	int size = 64;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v == q.drop());
}

TEST_CASE("Push_random_5") {
	QueueP q;
	int size = 128;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v == q.drop());
}

TEST_CASE("Push_random_5") {
	QueueP q;
	int size = 128;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v == q.drop());
}

TEST_CASE("Push_random_6") {
	QueueP q;
	int size = 0;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v == q.drop());
}

TEST_CASE("top_random_1") {
	QueueP q;
	int size = 8;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v[0] == q.top());
}

TEST_CASE("top_random_2") {
	QueueP q;
	int size = 16;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v[0] == q.top());
}

TEST_CASE("top_random_3") {
	QueueP q;
	int size = 32;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v[0] == q.top());
}

TEST_CASE("top_random_4") {
	QueueP q;
	int size = 64;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v[0] == q.top());
} 

TEST_CASE("top_random_5") {
	QueueP q;
	int size = 128;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK(v[0] == q.top());
}

TEST_CASE("top_random_6") {
	QueueP q;
	int size = 0;
	std::vector<int> v(size);

	random(v, q, size);

	CHECK_THROWS_AS(q.top(), const std::exception&);
}

TEST_CASE("ostream") {
	QueueP q;
	q.push(7);
	q.push(1);
	q.push(2);
	q.push(10);
	q.push(123);
	q.push(12);

	std::stringstream out;
	out << q;

	std::string get = out.str();

	std::string result = "1 2 7 10 12 123";

	CHECK(get == result);
}

TEST_CASE("istream") {
	QueueP p;
	std::vector<int> vec{5,10,1,4,12313,534,0,-100};
	std::stringstream in, out;
	std::string result = "-100 0 1 4 5 10 534 12313";

	for (int i = 0; i < vec.size(); i++) {
		vec[i] == vec[vec.size()-1]? in << vec[i] << " " : in << vec[i] << " ";
	}

	in >> p;
	out << p;

	std::string get = out.str();

	CHECK(get == result);
}