//
//  MBViewController.h
//  AppOne
//
//  Created by Vinu Ilangovan on 4/1/14.
//  Copyright (c) 2014 Vinu Ilangovan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIButton *changeTextButton;

- (IBAction)changeText:(id)sender;


@end
