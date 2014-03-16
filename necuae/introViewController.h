//
//  introViewController.h
//  necuae
//
//  Created by Hamad Ahmed Theyab on 3/16/14.
//  Copyright (c) 2014 Hamad Ahmed Theyab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ALRadialMenu.h"

@interface introViewController : UIViewController<ALRadialMenuDelegate>
- (IBAction)buttonPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *button;
@property (weak, nonatomic) IBOutlet UIButton *socialButton;

@property (strong, nonatomic) ALRadialMenu *radialMenu;
@property (strong, nonatomic) ALRadialMenu *socialMenu;

@property (strong, nonatomic) NSArray *popups;

@end
