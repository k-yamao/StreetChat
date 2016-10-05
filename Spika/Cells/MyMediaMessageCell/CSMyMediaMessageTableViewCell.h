//
//  MyMediaMessageTableViewCell.h
//  Prototype
//
//  Created by Ivo Peric on 28/08/15.
//  Copyright (c) 2015 Clover Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSBaseTableViewCell.h"

@interface CSMyMediaMessageTableViewCell : CSBaseTableViewCell

@property (weak, nonatomic) IBOutlet UIView *parentView;
@property (weak, nonatomic) IBOutlet UIView *backView;
@property (weak, nonatomic) IBOutlet UIImageView *labelImage;
@property (weak, nonatomic) IBOutlet UILabel *nameOfFile;
@property (weak, nonatomic) IBOutlet UILabel *size;
@property (weak, nonatomic) IBOutlet UILabel *download;
@property (weak, nonatomic) IBOutlet CSAvatarView *avatar;
@property (weak, nonatomic) IBOutlet UIImageView *peak;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *nameConstraint;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *dateConstraint;

@end
