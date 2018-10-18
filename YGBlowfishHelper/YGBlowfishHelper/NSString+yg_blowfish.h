

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (yg_blowfish)
/** BlowFish 加密:返回的是Base64的字符串 */
- (NSString *)yg_blowFishEncodingWithKey:(NSString *)pkey;

/** BlowFish 解密:需要是Base64的字符串调用,返回的是解密结果 */
- (NSString *)yg_blowFishDecodingWithKey:(NSString *)pkey;
@end

NS_ASSUME_NONNULL_END
