//
//  MBSecondViewController.h
//  AppOne
//
//  Created by Vinu Ilangovan on 4/1/14.
//  Copyright (c) 2014 Vinu Ilangovan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBSecondViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *enterLabel;
@property (weak, nonatomic) IBOutlet UITextField *textF;
@property (weak, nonatomic) IBOutlet UIButton *changeButton;

- (IBAction)change:(id)sender;

@end
