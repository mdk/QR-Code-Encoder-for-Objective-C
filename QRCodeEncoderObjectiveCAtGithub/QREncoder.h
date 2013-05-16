#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonCryptor.h>

@class DataMatrix;

#define kQREncoderLevelAuto         0
#define kQREncoderLevelL            0
#define kQREncoderLevelM            1
#define kQREncoderLevelQ            2
#define kQREncoderLevelH            3
#define kQREncoderVersionAuto       -1

@interface QREncoder : NSObject {
    
}

+ (DataMatrix*)encodeWithECLevel:(int)ecLevel version:(int)version string:(NSString *)string AESPassphrase:(NSString*)AESPassphrase;

+ (DataMatrix*)encodeWithECLevel:(int)ecLevel version:(int)version string:(NSString*)string;

+ (UIImage*)renderDataMatrix:(DataMatrix*)matrix imageDimension:(int)imageDimension;

@end

void FLProviderReleaseData(void *info, const void *data, size_t size);
