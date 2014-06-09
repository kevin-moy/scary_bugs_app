//
//  RWTScaryBugDoc.h
//  ScaryBugs
//
//  Created by Kevin Moy on 6/9/14.
//
//

#import <Foundation/Foundation.h>

@class RWTScaryBugData;

@interface RWTScaryBugDoc : NSObject

@property (strong) RWTScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

-(id)initWithTitle:(NSString *)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end
