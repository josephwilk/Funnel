//
//  FunnelClientHandler.h
//  Funnel
//
//  Created by Joseph Wilk on 28/05/2017.
//  Copyright © 2017 Keijiro Takahashi. All rights reserved.
//


#import <Foundation/Foundation.h>

@class SyphonClient;

@interface FunnelClientHandler : NSObject

@property (retain, nonatomic) SyphonClient *syphonClient;
@property (copy, nonatomic) NSString *serverName;
@property (assign) NSRect frameTextureRect;
@property (assign) int frameTextureName;
@property (assign) BOOL linearToSRGB;
@property (assign) BOOL discardAlpha;

@end
