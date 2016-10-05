//
//  ViewController.m
//  StreetChat
//
//  Created by 山尾和義 on 2016/10/03.
//  Copyright © 2016年 local-c.com. All rights reserved.
//

#import "ViewController.h"
#import "CSChatViewController.h"
#import "CSConfig.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)viewDidAppear:(BOOL)animated{
    NSDictionary *parameters = @{
                                 paramUserID : @"your_user_id",
                                 paramName : @"your_user_name",
                                 paramAvatarURL : @"http://url_to_your_avatar.jpg",
                                 paramRoomID: @"Your_room_id"
                                 };
    
    CSChatViewController *viewController = [[CSChatViewController alloc] initWithParameters:parameters];
    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:viewController];
    [self presentViewController:navigationController animated:YES completion:nil];
}

@end
