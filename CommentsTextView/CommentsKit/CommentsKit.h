//
//  CommentsKit.h
//  CommentsTextView
//
//  Created by sun on 2017/1/21.
//  Copyright © 2017年 sunli-ang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^ConfirmBlock)(NSString *comments);

@interface CommentsKit : NSObject

//+ (CommentsKit *)manger;


/**
 *  点击确定按钮回调
 */
+(void)showInput:(ConfirmBlock)confirmHandler;

/**
 *  设置默认文字
 */
+(void)setNormalContent:(NSString *)content;

/**
 *  输入文字的最大长度
 */
+(void)setMaxContentLength:(NSInteger)lenght;

/**
 *  设置标题
 */
+(void)setDescTitle:(NSString *)descTitle;
@end
