

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (yg_blowfish)
/** BlowFish 加密 */
- (NSData *)yg_blowFishEncodingWithKey:(NSString *)pkey;

/** BlowFish 解密 */
- (NSData *)yg_blowFishDecodingWithKey:(NSString *)pkey;
@end

NS_ASSUME_NONNULL_END
