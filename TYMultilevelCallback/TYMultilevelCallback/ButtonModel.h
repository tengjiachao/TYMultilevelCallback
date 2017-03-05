//
//  ButtonModel.h
//  button调用cell的tableView的controller(block和代理)
//
//  Created by thomasTY on 15/11/20.
//  Copyright © 2015年 滕佳超. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ButtonModel : NSObject

@property(nonatomic,strong)NSIndexPath * indexPath;
@property(nonatomic,copy)NSString * text;

+ (instancetype)ButtonModelWithDict:(NSDictionary *)dict;
@end
