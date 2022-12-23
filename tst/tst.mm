#import <XCTest/XCTest.h>
#include "header.h"
@interface tst : XCTestCase

@end

@implementation tst


- (void)testExample {
    const int N = 100;
    char fname[N];
    cout << "enter file name first: "; cin >>fname;
    CreateBIN(fname);
    XCTAssertNotEqual(N, -1);
}


@end
