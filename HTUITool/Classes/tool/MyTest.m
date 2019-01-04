//
//  MyTest.m
//  AFNetworking
//
//  Created by user on 2019/1/4.
//

#import "MyTest.h"

@implementation MyTest
+(UIImage *)test{
    NSBundle *currentBundle = [NSBundle bundleForClass:[self class]];
    //图片名称要写全称
    NSString *patch = [currentBundle pathForResource:@"user@2x.png" ofType:nil inDirectory:@"BMCCommon.bundle"];
    UIImage *myimage = [UIImage imageWithContentsOfFile:patch];
    
    //    UIStoryboard *board = [UIStoryboard storyboardWithName:@"aa" bundle:[NSBundle bundleForClass:[self class]]];
    
    CGFloat myscale =[UIScreen mainScreen].scale;
    NSString *str =[NSString stringWithFormat:@"BMCCommon.bundle/user@%.0fx.png",myscale];
    UIImage *image = [UIImage imageNamed:str];
    
    
    
    
    return image;
}
@end
