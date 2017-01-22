//
//  CommentsTextView.m
//  CommentsTextView
//
//  Created by sun on 2017/1/21.
//  Copyright © 2017年 sunli-ang. All rights reserved.
//

#import "CommentsTextView.h"

@interface CommentsTextView ()
@property (weak, nonatomic) IBOutlet UIButton *cancelBtn;
@property (weak, nonatomic) IBOutlet UIButton *confirmBtm;

@end


@implementation CommentsTextView

- (instancetype)init
{
    self = [super init];
    if (self) {
        self = [[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class]) owner:self options:nil].firstObject;
    }
    return self;
}

@end
