//
//  dcframeworkTests.m
//  dcframeworkTests
//
//  Created by Kevin Galligan on 10/30/16.
//  Copyright © 2016 Kevin Galligan. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "DOneTest.h"

@interface dcframeworkTests : XCTestCase

@end

@implementation dcframeworkTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testAndroidUnitTests {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    [DOneTest runDopplResourcesWithNSString:@"dopplTests.txt"];
}

@end
