/************************************************************************/
/* 
类：保存配置中每个peer节点信息
*/
/************************************************************************/

#pragma once

class TPeerInfo
{
public:
	int m_id;
	u32	m_appid;
	u32 m_appport;
	string m_url;
};