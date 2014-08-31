#define BOOST_TEST_MODULE bad_test_suite

#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE(bad_test) {
    int answer = 2 + 2;
    BOOST_CHECK_EQUAL(4, answer);
}
