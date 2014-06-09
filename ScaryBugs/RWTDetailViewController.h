//
//  RWTDetailViewController.h
//  ScaryBugs
//
//  Created by Kevin Moy on 6/9/14.
//
//

#import <UIKit/UIKit.h>

@interface RWTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
