//
//  NSData+Blowfish.h
//  XToolWhiteNoiseIOS
//
//  Created by 许亚光 on 2018/8/31.
//  Copyright © 2018年 小叶科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AdBlowfish)

/** BlowFish 加密 */
- (NSData *)yg_blowFishEncodingWithKey:(NSString *)pkey;

/** BlowFish 解密 */
- (NSData *)yg_blowFishDecodingWithKey:(NSString *)pkey;


@end
