//
//  Button.h
//  button调用cell的tableView的controller(block和代理)
//
//  Created by thomasTY on 15/11/20.
//  Copyright © 2015年 滕佳超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ButtonModel.h"



@interface Button : UIButton

@property(nonatomic,strong)ButtonModel * buttonModel;

@property(nonatomic,copy)void (^callBack) (NSIndexPath * indexPath, NSInteger tag);

- (instancetype)initWithCallBack:(void (^) (NSIndexPath * indexPath, NSInteger tag))buttonClickCallBack;





@end

