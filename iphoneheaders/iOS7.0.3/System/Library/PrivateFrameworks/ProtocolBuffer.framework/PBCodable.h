/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)formattedText;
-(void)writeTo:(id)arg1 ;
@end
