//
//  SpecialTextCell.h
//  SavorX
//
//  Created by 郭春城 on 2017/8/28.
//  Copyright © 2017年 郭春城. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpecialTextCell : UITableViewCell

@property (nonatomic, strong) UILabel * artTextLabel;

- (void)configWithText:(NSString *)text;

@end
