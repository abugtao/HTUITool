//
//  UILabel+HTHelper.h
//  HTUITool
//
//  Created by user on 2018/7/16.
//

#import <UIKit/UIKit.h>

@interface UILabel (HTHelper)
+ (id)labelWithTextColor:(UIColor *)color font:(UIFont *)font textAlignment:(NSTextAlignment)alignment;
+ (id)labelWithTextColor:(UIColor *)color font:(UIFont *)font textAlignment:(NSTextAlignment)alignment text:(NSString *)text;



- (void)setTextColor:(UIColor *)textColor range:(NSRange)range;
- (void)setFont:(UIFont *)font range:(NSRange)range;

- (void)setTextColor:(UIColor *)textColor contentString:(NSString*)string;
- (void)setFont:(UIFont *)font contentString:(NSString*)contentString;

- (void)setTextColor:(UIColor *)textColor afterOccurenceOfString:(NSString*)separator;
- (void)setFont:(UIFont *)font afterOccurenceOfString:(NSString*)separator;

//行高
- (void)setLineHeightMargin:(CGFloat)margin;
@end
