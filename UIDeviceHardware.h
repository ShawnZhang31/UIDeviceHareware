//
//  UIDeviceHardware.h
//
//  检测iOS设备的具体硬件信息.

#import <Foundation/Foundation.h>

/**
 * 检测iOS设备的具体硬件信息.
 */
@interface UIDeviceHardware : NSObject 

/**
 * 返回具体的设备名.
 */
+ (NSString *) platform;
/**
 * 返回设备的更多硬件信息.
 */
+ (NSString *) platformString;

@end