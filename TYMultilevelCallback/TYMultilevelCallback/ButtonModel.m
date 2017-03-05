//
//  ButtonModel.m
//  button调用cell的tableView的controller(block和代理)
//
//  Created by thomasTY on 15/11/20.
//  Copyright © 2015年 滕佳超. All rights reserved.
//

#import "ButtonModel.h"

@implementation ButtonModel


+ (instancetype)ButtonModelWithDict:(NSDictionary *)dict
{
    ButtonModel * buttonModel = [ButtonModel new];
    [buttonModel setValuesForKeysWithDictionary:dict];
    return buttonModel;
}


@end
