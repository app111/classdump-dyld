/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableDictionary, NSData;

@interface CTMessagePart : NSObject {

	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	NSString* _contentId;
	NSString* _contentLocation;
	NSData* _data;

}

@property (nonatomic,copy) NSString * contentType;                  //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * contentId;                    //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(id)contentId;
-(void)setContentId:(id)arg1 ;
-(void)setContentLocation:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)contentLocation;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
@end
