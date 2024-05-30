//
//  input_error_tests.m
//  input_error_tests
//
//  Created by Teghjyot Singh on 30/5/2024.
//

#import <XCTest/XCTest.h>
#include "../push_swap.h"

@interface input_error_tests : XCTestCase

@end

@implementation input_error_tests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testAcceptedInput {
	int	result = verify(ft_split("1 3 5 +9 20 -4 50 60 04 08", ' '));
	XCTAssertEqual(result, 0);
	result = verify(ft_split("3 4 6 8 9 74 -56 +495", ' '));
	XCTAssertEqual(result, 0);
}

- (void)testUnacceptedInput {
	int result = verify(ft_split("1 3 dog 35 80 -3", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split("a", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split("1 2 3 5 67b778 947", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split(" 12 4 6 8 54fhd 4354", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split("1 --    45 32", ' '));
	XCTAssertEqual(result, 1);
}

- (void)testDuplicates {
	int result = verify(ft_split("1 3 58 9 3", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split("3 03", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split(" 49 128     50 38   49", ' '));
	XCTAssertEqual(result, 1);
	result = verify(ft_split("95 99 -9 10 9", ' '));
	XCTAssertEqual(result, 0);
}

- (void)testUndefined {
	int result = verify(ft_split("\"1 2 4 3\" 76 90 \"348 05", ' '));
	XCTAssertEqualWithAccuracy(result, 0.5, 0.5);
}

//- (void)testPerformanceExample {
//    // This is an example of a performance test case.
//    [self measureBlock:^{
//        // Put the code you want to measure the time of here.
//    }];
//}

@end
