//
//  CommentsTextView.h
//  CommentsTextView
//
//  Created by sun on 2017/1/21.
//  Copyright © 2017年 sunli-ang. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^CancelBlock)();
typedef void(^ConfirmBlock)(NSString *comments);

@interface CommentsTextView : UIView
@property (weak, nonatomic) IBOutlet UITextView *aTextView;
@property (weak, nonatomic) IBOutlet UILabel *descTitleLabel;

@end
