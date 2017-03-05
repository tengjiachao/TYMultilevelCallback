//
//  ButtonsView.h
//  button调用cell的tableView的controller(block和代理)
//
//  Created by thomasTY on 15/11/20.
//  Copyright © 2015年 滕佳超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ButtonModel.h"

@protocol ButtonsViewDelegate <NSObject>

- (void)buttonDidClick:(NSIndexPath *)indexPath andTag:(NSInteger)tag;

@end

@interface ButtonsView : UIControl

@property(nonatomic,strong)ButtonModel * buttonModel;

@property(nonatomic,weak)id<ButtonsViewDelegate> delegate;

@end
