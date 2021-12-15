struct PointXYZIF
{
	float x{ 0 };
	float y{ 0 };
	float z{ 0 };
	float intensity{ 0 };
	unsigned int id{ 0 };
	static constexpr unsigned int END_OF_SCAN_ID = 65535u;
};

float mmove_x( const void* msg , int idx , float point_step )
{
    struct PointXYZIF pt;
    memmove(static_cast<void *>(&pt.x),static_cast<const void *>(&msg.data[idx]),point_step);
    return pt.x;
}

float mmove_y( const void* msg , int idx , float point_step )
{
    struct PointXYZIF pt;
    memmove(static_cast<void *>(&pt.x),static_cast<const void *>(&msg.data[idx]),point_step);
    return pt.y;
}

float mmove_z( const void* msg , int idx , float point_step )
{
    struct PointXYZIF pt;
    memmove(static_cast<void *>(&pt.x),static_cast<const void *>(&msg.data[idx]),point_step);
    return pt.z;
}

float mmove_intensity( const void* msg , int idx , float point_step )
{
    struct PointXYZIF pt;
    memmove(static_cast<void *>(&pt.x),static_cast<const void *>(&msg.data[idx]),point_step);
    return pt.intensity;
}

unsigned int mmove_id( const void* msg , int idx , float point_step )
{
    struct PointXYZIF pt;
    memmove(static_cast<void *>(&pt.x),static_cast<const void *>(&msg.data[idx]),point_step);
    return pt.id;
}

unsigned int mmove_END_OF_SCAN_ID( const void* msg , int idx , float point_step )
{
    struct PointXYZIF pt;
    memmove(static_cast<void *>(&pt.x),static_cast<const void *>(&msg.data[idx]),point_step);
    return pt.END_OF_SCAN_ID;
}

void m_output(int output_pool)
{
    m_output = output_pool.get_allocator();
    m_output.splice_after( m_output.cbefore_begin() , m_output_pool , m_output_before_begin() )
}