//
//  YourTextMessageTableViewCell.h
//  Prototype
//
//  Created by Ivo Peric on 26/08/15.
//  Copyright (c) 2015 Clover Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSBaseTableViewCell.h"

@interface CSYourTextMessageTableViewCell : CSBaseTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *yourTextMessage;
@property (weak, nonatomic) IBOutlet UIView *yourBackground;
@property (weak, nonatomic) IBOutlet CSAvatarView *avatar;
@property (weak, nonatomic) IBOutlet UIView *parentView;
@property (weak, nonatomic) IBOutlet UIImageView *peak;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *nameConstraint;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *dateConstraint;

@end
