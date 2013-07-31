#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonCryptor.h>

@class QRCDataMatrix;

#define kQRCEncoderLevelAuto         0
#define kQRCEncoderLevelL            0
#define kQRCEncoderLevelM            1
#define kQRCEncoderLevelQ            2
#define kQRCEncoderLevelH            3
#define kQRCEncoderVersionAuto       -1

@interface QRCEncoder : NSObject {
    
}

+ (QRCDataMatrix*)encodeWithECLevel:(int)ecLevel version:(int)version string:(NSString *)string AESPassphrase:(NSString*)AESPassphrase;

+ (QRCDataMatrix*)encodeWithECLevel:(int)ecLevel version:(int)version string:(NSString*)string;

+ (UIImage*)renderQRCDataMatrix:(QRCDataMatrix*)matrix imageDimension:(int)imageDimension;
+ (unsigned char*)renderQRCDataMatrix:(QRCDataMatrix*)matrix dimension:(int*)dimension;

@end

void FLProviderReleaseData(void *info, const void *data, size_t size);
