//
//  StringUtil.h
//  AttendanceAssistant
//
//  Created by Sure on 2017/8/10.
//  Copyright © 2017年 Sure. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StringUtil : NSString

/**
 获取省市区数据
 */
+ (NSMutableDictionary *)getGeographyData;

@end
