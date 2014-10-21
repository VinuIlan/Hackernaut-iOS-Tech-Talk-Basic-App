//
//  MBViewController.m
//  AppOne
//
//  Created by Vinu Ilangovan on 4/1/14.
//  Copyright (c) 2014 Vinu Ilangovan. All rights reserved.
//

#import "MBViewController.h"
#import "MBSecondViewController.h"

@interface MBViewController ()

@end

@implementation MBViewController


- (IBAction)changeText:(id)sender {
    _titleLabel.text = @"How are you?";
}


- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
