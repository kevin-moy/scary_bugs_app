//
//  RWTScaryBugData.m
//  ScaryBugs
//
//  Created by Kevin Moy on 6/9/14.
//
//

#import "RWTScaryBugData.h"

@implementation RWTScaryBugData
@synthesize title = _title;
@synthesize  rating = _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}
@end
