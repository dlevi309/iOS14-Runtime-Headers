/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLPTextDecoder.h>
#import <CVNLP/CVNLPTextDecoding.h>

@class CVNLPActivationMatrix, NSString;

@interface CVNLPCTCTextDecoder : CVNLPTextDecoder <CVNLPTextDecoding> {

	CVNLPActivationMatrix* _activationMatrix;

}

@property (nonatomic,retain) CVNLPActivationMatrix * activationMatrix;              //@synthesize activationMatrix=_activationMatrix - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLanguageResourceBundle:(id)arg1 ;
-(id)decodingResultWithConfiguration:(id)arg1 withContext:(id)arg2 ;
-(id)greedyDecodingResultWithConfiguration:(id)arg1 ;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 ;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3 ;
-(id)greedyDecodingResult;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3 optimizeAlignment:(BOOL)arg4 ;
-(CVNLPActivationMatrix *)activationMatrix;
-(void)setActivationMatrix:(CVNLPActivationMatrix *)arg1 ;
@end
