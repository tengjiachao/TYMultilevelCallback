//
//  TableViewCell.h
//  button调用cell的tableView的controller(block和代理)
//
//  Created by thomasTY on 15/11/20.
//  Copyright © 2015年 滕佳超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Button.h"
#import "ButtonsView.h"
#import "ButtonModel.h"

@interface TableViewCell : UITableViewCell
@property(nonatomic,strong)ButtonModel * buttonModel;

@property(nonatomic,strong)ButtonsView * buttonsView;


@end
