//
//  TableViewCell.m
//  button调用cell的tableView的controller(block和代理)
//
//  Created by thomasTY on 15/11/20.
//  Copyright © 2015年 滕佳超. All rights reserved.
//

#import "TableViewCell.h"

@implementation TableViewCell
-(void)setButtonModel:(ButtonModel *)buttonModel
{
    _buttonModel = buttonModel;
    
    _buttonsView = [[ButtonsView alloc] initWithFrame:CGRectMake(0, 0, [UIScreen mainScreen].bounds.size.width, 26)];
    _buttonsView.buttonModel = buttonModel;
    [self addSubview:_buttonsView];
}
@end
